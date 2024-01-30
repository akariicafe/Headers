@protocol NTKGalleonColorPalette;

@interface NTKGalleonHandsView : NTKAnalogHandsView {
    double _compassModeFraction;
}

@property (retain, nonatomic) id<NTKGalleonColorPalette> palette;

- (void).cxx_destruct;
- (void)applyHourMinuteHandsTransitionFraction:(double)a0 fromStrokeColor:(id)a1 fromFillColor:(id)a2 toStrokeColor:(id)a3 toFillColor:(id)a4;
- (void)applySecondHandTransitionFraction:(double)a0 fromColor:(id)a1 toColor:(id)a2;
- (id)hourHandConfiguration;
- (id)initForDevice:(id)a0;
- (id)minuteHandConfiguration;
- (id)secondHandConfiguration;
- (void)_applyPalette;
- (void)setCompassMode:(unsigned long long)a0;
- (void)applyTransitionFractionToCompassMode:(unsigned long long)a0 fraction:(double)a1;

@end
