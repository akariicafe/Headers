@interface FxParameterAngle : FxPinParameter {
    struct FxParameterAnglePriv { BOOL x0; double x1; double x2; } *_anglePriv;
}

- (void)setStepValue:(double)a0;
- (id)init;
- (double)stepValue;
- (void)dealloc;
- (double)startValue;
- (void)setStartValue:(double)a0;
- (BOOL)isClockwise;
- (void)setIsClockwise:(BOOL)a0;

@end
