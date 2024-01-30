@interface VGExpressionIsEyesForwardFilter : VGExpressionFilter {
    float _eyesForwardYawSensitivityInRadians;
    float _eyesForwardPitchSensitivityInRadians;
}

- (float)filter:(id)a0;
- (id)initWithEyesForwardYawSensitivity:(float)a0 eyesForwardPitchSensitivity:(float)a1;

@end
