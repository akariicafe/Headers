@class SBFTraitsArbitrationDeviceOrientationInputs;

@interface SBTraitsInputsOrientationLockValidator : SBTraitsInputsValidator {
    long long _lockOrientation;
    BOOL _prefersDeferringOrientationUpdates;
    SBFTraitsArbitrationDeviceOrientationInputs *_lastForwardedOrientationInputs;
}

- (id)initWithValidatorOrder:(id)a0;
- (id)validateInputs:(id)a0;
- (void)setPrefersDeferringOrientationUpdates:(BOOL)a0;
- (void)setLockOrientation:(long long)a0;
- (id)description;
- (void).cxx_destruct;

@end
