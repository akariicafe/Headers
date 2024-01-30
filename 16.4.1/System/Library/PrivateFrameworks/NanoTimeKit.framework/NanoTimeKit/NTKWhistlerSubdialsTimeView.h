@class NTKWhistlerAnalogColorPalette;

@interface NTKWhistlerSubdialsTimeView : NTKDualTimeView

@property (retain, nonatomic) NTKWhistlerAnalogColorPalette *palette;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_minuteTickSize;
- (id)_digitalTimeLabelColorForColorPalette:(id)a0;
- (id)_hourMinuteHandFillColorForColorPalette:(id)a0;
- (id)_hourMinuteHandStrokeColorForColorPalette:(id)a0;
- (unsigned long long)_hourTickCount;
- (struct CGSize { double x0; double x1; })_hourTickSize;
- (unsigned long long)_minuteTickCount;
- (double)_minuteTickInset;
- (id)_secondHandColorForColorPalette:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1 andDevice:(id)a2;

@end
