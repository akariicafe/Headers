@interface FxParameterAngle : FxPinParameter {
    struct FxParameterAnglePriv { BOOL x0; double x1; double x2; } *_anglePriv;
}

- (double)stepValue;
- (void)setStepValue:(double)a0;
- (void)dealloc;
- (id)init;
- (void)setStartValue:(double)a0;
- (double)startValue;
- (void)setIsClockwise:(BOOL)a0;
- (BOOL)isClockwise;

@end
