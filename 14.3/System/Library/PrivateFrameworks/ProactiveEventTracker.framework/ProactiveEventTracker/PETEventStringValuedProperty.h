@class NSSet;

@interface PETEventStringValuedProperty : PETEventProperty {
    NSSet *_possibleValues;
    BOOL _autoSanitizeValues;
}

- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)cardinality;
- (id)initWithName:(id)a0 possibleValues:(id)a1 autoSanitizeValues:(BOOL)a2;
- (id)longestValueString;
- (id)description;
- (id)possibleValues;
- (BOOL)isValidValue:(id)a0;

@end
