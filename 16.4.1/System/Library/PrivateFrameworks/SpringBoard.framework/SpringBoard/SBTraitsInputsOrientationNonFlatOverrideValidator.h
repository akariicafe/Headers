@interface SBTraitsInputsOrientationNonFlatOverrideValidator : SBTraitsInputsValidator {
    long long _lastNonFlatOrientationOverride;
}

- (id)validateInputs:(id)a0;
- (void)setLastNonFlatOrientationOverride:(long long)a0;
- (id)description;

@end
