@class NSString;

@interface SBElasticVolumeSliderView : MediaControlsVolumeSliderView <SBElasticGlyphView>

@property (nonatomic) double additiveGlyphScaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAxis:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })glyphCenter;
- (id)createBackgroundView;

@end
