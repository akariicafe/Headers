@class NTKWhistlerAnalogColorPalette;

@interface NTKWhistlerSubdialsTimeView : NTKDualTimeView

@property (retain, nonatomic) NTKWhistlerAnalogColorPalette *palette;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1 andDevice:(id)a2;
- (double)_analogTickInset;
- (struct CGSize { double x0; double x1; })_hourTickSize;
- (struct CGSize { double x0; double x1; })_minuteTickSize;
- (unsigned long long)_hourTickCount;
- (unsigned long long)_minuteTickCount;
- (id)_hourMinuteHandFillColorForColorPalette:(id)a0;
- (id)_hourMinuteHandStrokeColorForColorPalette:(id)a0;
- (id)_secondHandColorForColorPalette:(id)a0;
- (id)_digitalTimeLabelColorForColorPalette:(id)a0;

@end
