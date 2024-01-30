@interface FxParameterAngle : FxPinParameter {
    struct FxParameterAnglePriv { BOOL x0; double x1; double x2; } *_anglePriv;
}

- (void)setStepValue:(double)a0;
- (double)stepValue;
- (id)init;
- (void)setStartValue:(double)a0;
- (void)dealloc;
- (double)startValue;
- (BOOL)isClockwise;
- (void)setIsClockwise:(BOOL)a0;

@end
