@class UIFont, NSString, _UILegibilitySettings, UIImage, UIView, _UIVibrantSettings, NSMutableSet, UILabel, UIColor;
@protocol _UIGlintyStringViewDelegate;

@interface _UIGlintyStringView : UIView

@property (nonatomic) BOOL needsTextUpdate;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) struct CGSize { double width; double height; } labelSize;
@property (retain, nonatomic) UIView *spotlightView;
@property (nonatomic) int textIndex;
@property (retain, nonatomic) UIImage *chevron;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } chevronFrame;
@property (retain, nonatomic) UIView *highlightView;
@property (nonatomic) BOOL animating;
@property (nonatomic) BOOL fading;
@property (nonatomic) BOOL showing;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UIView *blurView;
@property (retain, nonatomic) UIView *shimmerImageView;
@property (retain, nonatomic) UIView *reflectionImageView;
@property (nonatomic) double blurAlpha;
@property (retain, nonatomic) NSMutableSet *blurHiddenRequesters;
@property (nonatomic) id<_UIGlintyStringViewDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *textLanguage;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } labelFrame;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) _UIVibrantSettings *vibrantSettings;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *chevronBackgroundColor;
@property (nonatomic) BOOL animationRepeats;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) BOOL hasCustomBackgroundColor;
@property (nonatomic) long long chevronStyle;
@property (nonatomic) double horizontalPadding;
@property (nonatomic) BOOL highlight;
@property (nonatomic) BOOL allowsLuminanceAdjustments;
@property (nonatomic) BOOL usesBackgroundDimming;

- (void)fadeIn;
- (void)_updateHighlight;
- (void)show;
- (void).cxx_destruct;
- (double)baselineOffsetFromBottom;
- (void)dealloc;
- (void)hideBlur;
- (void)showBlur;
- (double)baselineOffsetFromBottomWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithText:(id)a0 andFont:(id)a1;
- (void)fadeInWithDuration:(double)a0;
- (void)fadeOutWithDuration:(double)a0;
- (void)didMoveToWindow;
- (void)updateText;
- (void)layoutSubviews;
- (BOOL)isAnimating;
- (void)hide;
- (void)fadeOut;
- (void)hideEffects;
- (void)showEffects;
- (id)_highlightColor;
- (void)updateBlurForHiddenRequesters;
- (void)addGlintyAnimations;
- (void)removeGlintyAnimations;
- (id)_chevronImageForStyle:(long long)a0;
- (void)updateTextWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_chevronWidthWithPadding;
- (double)_chevronWidthWithPaddingCompression:(double)a0;
- (double)_chevronHeightWithMaxOffset;
- (void)_updateLabelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_chevronVerticalOffset;
- (id)shapeViewForCharactersInString:(id)a0 withFont:(id)a1 centeredInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)addShimmerAnimationToLayer:(id)a0;
- (void)stopAnimating;
- (void)addReflectionAnimationToLayer:(id)a0;
- (id)_highlightCompositingFilter;
- (struct CGSize { double x0; double x1; })_labelSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_chevronPadding;
- (void)setBlurHidden:(BOOL)a0 forRequester:(id)a1;
- (void)startAnimating;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
