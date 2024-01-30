@interface SBElasticSliderView : MediaControlsVolumeSliderView

@property (nonatomic) double additiveGlyphScaleFactor;

- (void)setAxis:(unsigned long long)a0;
- (id)createBackgroundView;
- (struct CGPoint { double x0; double x1; })glyphCenter;
- (void)_updateGlyphScaleForAdditiveScaleOrAxisUpdate;
- (void)stopGlyphAnimations;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
