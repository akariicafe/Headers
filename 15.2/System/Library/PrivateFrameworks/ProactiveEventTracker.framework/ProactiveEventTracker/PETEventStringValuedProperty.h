@class NSSet;

@interface PETEventStringValuedProperty : PETEventProperty {
    NSSet *_possibleValues;
    BOOL _autoSanitizeValues;
}

- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (BOOL)isValidValue:(id)a0;
- (id)description;
- (id)longestValueString;
- (void).cxx_destruct;
- (id)possibleValues;
- (id)initWithName:(id)a0 possibleValues:(id)a1 autoSanitizeValues:(BOOL)a2;
- (unsigned long long)cardinality;

@end
