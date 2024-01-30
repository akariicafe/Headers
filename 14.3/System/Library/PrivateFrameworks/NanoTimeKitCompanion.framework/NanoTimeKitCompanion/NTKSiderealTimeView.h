@class CABackdropLayer, CAFilter;

@interface NTKSiderealTimeView : NTKDualTimeView {
    CABackdropLayer *_blurBackdrop;
    CAFilter *_gaussianFilter;
    CAFilter *_brightnessFilter;
    CAFilter *_saturationFilter;
}

- (void).cxx_destruct;
- (void)_setupDigitalTimeViews;
- (id)_secondTickActiveColorForColor:(unsigned long long)a0;
- (void)_setupAnalogHandsView;
- (void)_didFinishTimeViewSetup;
- (BOOL)shouldUseCustomDialBackground;
- (id)_customDialBackgroundView;
- (void)setBrightnessFilterInputAmount:(double)a0;
- (void)setSaturationFilterInputAmount:(double)a0;
- (void)updateFilters;
- (double)_analogTickInset;
- (struct CGSize { double x0; double x1; })_hourTickSize;
- (struct CGSize { double x0; double x1; })_minuteTickSize;
- (unsigned long long)_hourTickCount;
- (unsigned long long)_minuteTickCount;
- (id)_hourTickColorForColor:(unsigned long long)a0;
- (id)_minuteTickColorForColor:(unsigned long long)a0;
- (id)_hourMinuteHandFillColorForColor:(unsigned long long)a0;
- (id)_hourMinuteHandStrokeColorForColor:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })_secondTickSize;
- (double)_digitalTimeLabelFontSize;
- (id)_digitalTimeLabelColorForColor:(unsigned long long)a0;
- (id)_secondTickInactiveColorForColor:(unsigned long long)a0;

@end
