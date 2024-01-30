@class MTMaterialView, UIView;
@protocol SBFolderBackgroundViewDelegate;

@interface SBFolderBackgroundView : UIView {
    UIView *_tintView;
    MTMaterialView *_blurView;
    double _continuousCornerRadius;
}

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } folderBackgroundSize;
@property (class, readonly, nonatomic) double cornerRadiusToInsetContent;

@property (nonatomic) unsigned long long currentEffect;
@property (weak, nonatomic) id<SBFolderBackgroundViewDelegate> delegate;
@property (nonatomic) unsigned long long effect;
@property (readonly, nonatomic) unsigned long long concreteEffect;

+ (void)warmupIfNecessary;

- (void)layoutSubviews;
- (void)_reduceTransparencyChanged;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_hasLowQualityBackground;
- (void).cxx_destruct;
- (id)_tintViewBackgroundColorAtFullAlpha;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)updateTintEffectColor;
- (void)_updateCurrentEffect;

@end
