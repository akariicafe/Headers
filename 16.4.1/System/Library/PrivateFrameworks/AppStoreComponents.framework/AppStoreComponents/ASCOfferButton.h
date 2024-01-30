@class UILabel, NSString, UIViewPropertyAnimator, CAAnimation, ASCOfferMetadata, ASCModalViewInteraction, ASCOfferButtonBackgroundImageView, ASCOfferTheme;
@protocol ASCOfferButtonDelegate;

@interface ASCOfferButton : UIControl

@property (retain, nonatomic) NSString *size;
@property (readonly, nonatomic) ASCOfferButtonBackgroundImageView *imageView;
@property (readonly, nonatomic) UILabel *titleLabelIfLoaded;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabelIfLoaded;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) ASCModalViewInteraction *modalInteraction;
@property (retain, nonatomic) CAAnimation *imageAnimation;
@property (retain, nonatomic) UIViewPropertyAnimator *currentTransition;
@property (retain, nonatomic) ASCOfferTheme *theme;
@property (retain, nonatomic) ASCOfferMetadata *metadata;
@property (weak, nonatomic) id<ASCOfferButtonDelegate> delegate;
@property (nonatomic) long long subtitlePosition;
@property (nonatomic, getter=isFixedHeight) BOOL fixedHeight;
@property (nonatomic) BOOL shouldTopAlign;
@property (nonatomic) double topPadding;
@property (nonatomic) BOOL shouldExpandBackground;

+ (BOOL)adjustsTitleFontSizeToFitWidthForSize:(id)a0;
+ (id)mediumTitleFontForText:(id)a0 compatibleWithTraitCollection:(id)a1;
+ (id)progressStateImageFittingSize:(id)a0 forTheme:(id)a1 startPercent:(double)a2 endPercent:(double)a3 useFullImageSize:(BOOL)a4;
+ (id)smallTitleFontForText:(id)a0 compatibleWithTraitCollection:(id)a1;
+ (id)viewInAppStoreTitleFontForText:(id)a0 compatibleWithTraitCollection:(id)a1;

- (id)accessibilityLabel;
- (void)encodeWithCoder:(id)a0;
- (id)accessibilityIdentifier;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithCoder:(id)a0;
- (id)focusEffect;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)canBecomeFocused;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)layoutSubviews;
- (id)accessibilityHint;
- (void)setEnabled:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (id)description;
- (void)invalidateIntrinsicContentSize;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (BOOL)accessibilityActivate;
- (id)accessibilityValue;
- (void)setSubtitleLabelIfLoaded:(id)a0;
- (id)makeLayout;
- (void)beginModalStateWithCancelBlock:(id /* block */)a0;
- (BOOL)canTransitionToMetadata:(id)a0;
- (BOOL)chainTransitionToMetadata:(id)a0 scalingDurationBy:(double)a1 withCompletion:(id /* block */)a2;
- (void)endModalState;
- (void)setTitleLabelIfLoaded:(id)a0;
- (BOOL)shouldTransitionImageViewFromMetadata:(id)a0 toMetadata:(id)a1;
- (id)transitionColorForMetadata:(id)a0;
- (id)transitionImageForMetadata:(id)a0;
- (void)transitionToMetadata:(id)a0 scalingDurationBy:(double)a1 withCompletion:(id /* block */)a2;
- (void)transitionToMetadata:(id)a0 withCompletion:(id /* block */)a1;
- (void)updateFocusState;
- (void)updateImageStyleProperties;
- (void)updateLabelStyleProperties;

@end
