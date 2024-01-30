@interface PETEventNumericalProperty : PETEventProperty {
    struct _NSRange { unsigned long long location; unsigned long long length; } _validRange;
    BOOL _clampValues;
}

- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (unsigned long long)_unsignedIntegerValueForNumericValue:(id)a0;
- (BOOL)isValidValue:(id)a0;
- (id)longestValueString;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })validRange;
- (id)initWithName:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 clampValues:(BOOL)a2;
- (unsigned long long)cardinality;
- (id)description;

@end
