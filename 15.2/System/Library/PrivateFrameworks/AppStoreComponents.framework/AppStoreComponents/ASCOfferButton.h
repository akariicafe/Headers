@class ASCOfferTheme, ASCOfferMetadata, CAAnimation, ASCOfferButtonBackgroundImageView, UILabel, ASCModalViewInteraction, UIViewPropertyAnimator;
@protocol ASCOfferButtonDelegate;

@interface ASCOfferButton : UIControl

@property (readonly, nonatomic) ASCOfferButtonBackgroundImageView *imageView;
@property (readonly, nonatomic) UILabel *titleLabelIfLoaded;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabelIfLoaded;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) ASCModalViewInteraction *modalInteraction;
@property (retain, nonatomic) CAAnimation *imageAnimation;
@property (retain, nonatomic) UIViewPropertyAnimator *currentTransition;
@property (nonatomic) long long subtitlePosition;
@property (retain, nonatomic) ASCOfferTheme *theme;
@property (retain, nonatomic) ASCOfferMetadata *metadata;
@property (weak, nonatomic) id<ASCOfferButtonDelegate> delegate;
@property (nonatomic, getter=isFixedHeight) BOOL fixedHeight;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (void)invalidateIntrinsicContentSize;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)accessibilityTraits;
- (id)description;
- (void)setSemanticContentAttribute:(long long)a0;
- (BOOL)accessibilityActivate;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (void)traitCollectionDidChange:(id)a0;
- (id)accessibilityValue;
- (id)initWithCoder:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)setSubtitleLabelIfLoaded:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)accessibilityLabel;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (id)focusEffect;
- (void)setTitleLabelIfLoaded:(id)a0;
- (void)updateLabelStyleProperties;
- (void)updateImageStyleProperties;
- (void)transitionToMetadata:(id)a0 scalingDurationBy:(double)a1 withCompletion:(id /* block */)a2;
- (BOOL)canTransitionToMetadata:(id)a0;
- (BOOL)chainTransitionToMetadata:(id)a0 scalingDurationBy:(double)a1 withCompletion:(id /* block */)a2;
- (id)transitionImageForMetadata:(id)a0;
- (id)transitionColorForMetadata:(id)a0;
- (BOOL)shouldTransitionImageViewFromMetadata:(id)a0 toMetadata:(id)a1;
- (void)updateFocusState;
- (id)makeLayout;
- (void)beginModalStateWithCancelBlock:(id /* block */)a0;
- (void)endModalState;
- (void)transitionToMetadata:(id)a0 withCompletion:(id /* block */)a1;

@end
