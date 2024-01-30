@interface PETEventFreeValuedProperty : PETEventProperty

- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (unsigned long long)cardinality;
- (id)longestValueString;
- (id)description;
- (id)possibleValues;
- (BOOL)isValidValue:(id)a0;
- (id)initWithName:(id)a0;

@end
