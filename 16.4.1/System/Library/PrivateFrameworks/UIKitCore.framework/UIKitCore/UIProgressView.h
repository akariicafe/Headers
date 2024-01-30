@class UIView, NSArray, UIImage, UIImageView, NSProgress, UIVisualEffectView, NSObservation, UIColor;

@interface UIProgressView : UIView <NSCoding> {
    long long _barStyle;
    UIView *_contentView;
    UIImageView *_trackView;
    UIImageView *_progressView;
    BOOL _isAnimating;
    NSArray *_trackColors;
    NSArray *_progressColors;
    UIVisualEffectView *_effectView;
    NSObservation *_progressObservation;
    UIView *_shadowView;
    double _currentCornerRadius;
}

@property (nonatomic) long long progressViewStyle;
@property (nonatomic) float progress;
@property (retain, nonatomic) UIColor *progressTintColor;
@property (retain, nonatomic) UIColor *trackTintColor;
@property (retain, nonatomic) UIImage *progressImage;
@property (retain, nonatomic) UIImage *trackImage;
@property (retain, nonatomic) NSProgress *observedProgress;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (void)_fillImagesForIndex:(unsigned long long)a0 style:(long long)a1 barStyle:(long long)a2;
+ (unsigned long long)_indexForStyle:(long long)a0 barStyle:(long long)a1;
+ (id)_standardInnerImageForStyle:(long long)a0 barStyle:(long long)a1;
+ (id)_standardOuterImageForStyle:(long long)a0 barStyle:(long long)a1;
+ (id)_tintedImageWithTraitCollection:(id)a0 forHeight:(double)a1 andColors:(id)a2;
+ (id)_tintedImageWithTraitCollection:(id)a0 forHeight:(double)a1 andColors:(id)a2 roundingRectCorners:(unsigned long long)a3;

- (void)_dynamicUserInterfaceTraitDidChange;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (long long)barStyle;
- (void)encodeWithCoder:(id)a0;
- (void)setBarStyle:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void)_populateArchivedSubviews:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_reducedTransparencyDidChange:(id)a0;
- (id)_effectiveContentView;
- (void)tintColorDidChange;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateImages;
- (void).cxx_destruct;
- (id)_appropriateProgressImage;
- (id)_appropriateTrackImage;
- (id)_defaultTrackColorForCurrentStyle;
- (void)_layoutShadow;
- (id)_progressColor;
- (unsigned long long)_roundedCornersForProgressForCurrentStyle;
- (unsigned long long)_roundedCornersForTrackForCurrentStyle;
- (void)_setProgress:(float)a0;
- (void)_setProgressAnimated:(float)a0 duration:(double)a1 delay:(double)a2 options:(unsigned long long)a3;
- (void)_setProgressColor:(id)a0;
- (void)_setupProgressViewCommon;
- (void)_setupShadow;
- (double)_shadowOpacityForUserInterfaceStyle:(long long)a0;
- (BOOL)_shouldTintProgress;
- (BOOL)_shouldTintTrack;
- (void)_updateCornerRadiusWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithProgressViewStyle:(long long)a0;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)setProgress:(float)a0 animated:(BOOL)a1;

@end
