@class NSString, UIView;

@interface SBCoverSheetBlurView : UIView <SBWallpaperObserver> {
    id /* block */ _scaleAdjustment;
    id /* block */ _alphaAdjustment;
    UIView *_reduceTransparencyView;
    long long _variantToTrack;
}

@property (nonatomic) double blurRadius;
@property (nonatomic) double weighting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)layoutSubviews;
- (id)_averageWallpaperColor;
- (void)_createFilters;
- (void)wallpaperDidChangeForVariant:(long long)a0;
- (void)_updateForBlurRadius:(double)a0 weighting:(double)a1 forPresentationValue:(BOOL)a2;
- (id)backdropLayer;
- (void)_removeFilters;
- (void).cxx_destruct;
- (void)_removeReduceTransparencyView;
- (void)setWeighting:(double)a0 forPresentationValue:(BOOL)a1;
- (void)_configureForCurrentReduceTransparencySetting;
- (void)_reduceTransparencyEnabledStateDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scaleAdjustment:(id /* block */)a1 alphaAdjustment:(id /* block */)a2;
- (void)_createReduceTransparencyView;
- (void)dealloc;

@end
