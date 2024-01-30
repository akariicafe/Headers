@class NTKSiderealBackgroundQuad, NTKAltitudeColorCurveView, CLKUIQuadView;

@interface NTKSiderealDialBackgroundView : UIView {
    NTKSiderealBackgroundQuad *_backgroundQuad;
}

@property (retain, nonatomic) NTKAltitudeColorCurveView *backgroundDialView;
@property (retain, nonatomic) CLKUIQuadView *quadView;
@property (readonly, nonatomic) NTKSiderealBackgroundQuad *quad;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)setSolarDayProgress:(double)a0;
- (void)setSectors:(id)a0;
- (void)updateDayMask;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orbitDiameter:(double)a1 timeOrbitRadius:(double)a2 timeRadius:(double)a3 dialImage:(id)a4 waypointImage:(id)a5 gnomonImage:(id)a6 dayGnomonImage:(id)a7 dayDiskBloomImage:(id)a8 dayDiscImage:(id)a9 nightGnomonImage:(id)a10 nightDiscImage:(id)a11 nightRingImage:(id)a12 initialData:(id)a13 useXR:(BOOL)a14;

@end
