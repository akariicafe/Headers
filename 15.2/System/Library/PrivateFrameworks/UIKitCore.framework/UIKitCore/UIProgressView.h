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

+ (void)_fillImagesForIndex:(unsigned long long)a0 style:(long long)a1 barStyle:(long long)a2;
+ (unsigned long long)_indexForStyle:(long long)a0 barStyle:(long long)a1;
+ (id)_standardInnerImageForStyle:(long long)a0 barStyle:(long long)a1;
+ (struct CGSize { double x0; double x1; })defaultSize;
+ (id)_tintedImageWithTraitCollection:(id)a0 forHeight:(double)a1 andColors:(id)a2 roundingRectCorners:(unsigned long long)a3;
+ (id)_standardOuterImageForStyle:(long long)a0 barStyle:(long long)a1;
+ (id)_tintedImageWithTraitCollection:(id)a0 forHeight:(double)a1 andColors:(id)a2;

- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setBarStyle:(long long)a0;
- (long long)barStyle;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)encodeWithCoder:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_reducedTransparencyDidChange:(id)a0;
- (void)_layoutShadow;
- (void)_populateArchivedSubviews:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_effectiveContentView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)_updateImages;
- (void)tintColorDidChange;
- (id)_progressColor;
- (BOOL)_shouldTintProgress;
- (void)_setupShadow;
- (BOOL)_shouldTintTrack;
- (void)_setupProgressViewCommon;
- (id)_appropriateTrackImage;
- (id)_defaultTrackColorForCurrentStyle;
- (void)_setProgressColor:(id)a0;
- (unsigned long long)_roundedCornersForTrackForCurrentStyle;
- (id)initWithProgressViewStyle:(long long)a0;
- (unsigned long long)_roundedCornersForProgressForCurrentStyle;
- (id)_appropriateProgressImage;
- (double)_shadowOpacityForUserInterfaceStyle:(long long)a0;
- (void)_updateCornerRadiusWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setProgressAnimated:(float)a0 duration:(double)a1 delay:(double)a2 options:(unsigned long long)a3;
- (void)_setProgress:(float)a0;
- (void)setProgress:(float)a0 animated:(BOOL)a1;

@end
