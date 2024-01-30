@interface FxParameterSlider : FxPinParameter {
    struct FxParameterSliderPriv { double x0; double x1; double x2; double x3; double x4; BOOL x5; } *_sliderPriv;
}

- (double)stepValue;
- (void)setStepValue:(double)a0;
- (void)setMaxValue:(double)a0;
- (void)dealloc;
- (void)setMinValue:(double)a0;
- (id)init;
- (double)minValue;
- (double)maxValue;
- (BOOL)isLogarithmic;
- (double)maxSliderValue;
- (double)minSliderValue;
- (void)setIsLogarithmic:(BOOL)a0;
- (void)setMaxSliderValue:(double)a0;
- (void)setMinSliderValue:(double)a0;

@end
