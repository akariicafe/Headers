@interface PETEventNumericalProperty : PETEventProperty {
    struct _NSRange { unsigned long long location; unsigned long long length; } _validRange;
    BOOL _clampValues;
}

- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (unsigned long long)_unsignedIntegerValueForNumericValue:(id)a0;
- (unsigned long long)cardinality;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })validRange;
- (id)longestValueString;
- (id)description;
- (BOOL)isValidValue:(id)a0;
- (id)initWithName:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 clampValues:(BOOL)a2;

@end
