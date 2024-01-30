@class ASCOfferTheme, ASCOfferMetadata, UIImageView, CAAnimation, UILabel, ASCModalViewInteraction, UIViewPropertyAnimator;
@protocol ASCOfferButtonDelegate;

@interface ASCOfferButton : UIControl

@property (readonly, nonatomic) UIImageView *imageView;
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

- (BOOL)isAccessibilityElement;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void).cxx_destruct;
- (void)setSemanticContentAttribute:(long long)a0;
- (unsigned long long)accessibilityTraits;
- (id)initWithCoder:(id)a0;
- (id)accessibilityLabel;
- (id)description;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (void)setTitleLabelIfLoaded:(id)a0;
- (void)updateLabelStyleProperties;
- (void)setSubtitleLabelIfLoaded:(id)a0;
- (void)updateImageStyleProperties;
- (void)transitionToMetadata:(id)a0 scalingDurationBy:(double)a1 withCompletion:(id /* block */)a2;
- (BOOL)canTransitionToMetadata:(id)a0;
- (BOOL)chainTransitionToMetadata:(id)a0 scalingDurationBy:(double)a1 withCompletion:(id /* block */)a2;
- (id)transitionImageForMetadata:(id)a0;
- (id)transitionColorForMetadata:(id)a0;
- (BOOL)shouldTransitionImageViewFromMetadata:(id)a0 toMetadata:(id)a1;
- (id)makeLayout;
- (void)beginModalStateWithCancelBlock:(id /* block */)a0;
- (void)endModalState;
- (void)transitionToMetadata:(id)a0 withCompletion:(id /* block */)a1;

@end
