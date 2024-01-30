@interface FxParameterSlider : FxPinParameter {
    struct FxParameterSliderPriv { double x0; double x1; double x2; double x3; double x4; BOOL x5; } *_sliderPriv;
}

- (void)setStepValue:(double)a0;
- (id)init;
- (void)setMaxValue:(double)a0;
- (double)stepValue;
- (void)dealloc;
- (double)maxValue;
- (double)minValue;
- (void)setMinValue:(double)a0;
- (BOOL)isLogarithmic;
- (double)minSliderValue;
- (void)setMinSliderValue:(double)a0;
- (double)maxSliderValue;
- (void)setMaxSliderValue:(double)a0;
- (void)setIsLogarithmic:(BOOL)a0;

@end
