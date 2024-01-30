@interface PETEventFreeValuedProperty : PETEventProperty

- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (BOOL)isValidValue:(id)a0;
- (id)description;
- (id)longestValueString;
- (id)initWithName:(id)a0;
- (id)possibleValues;
- (unsigned long long)cardinality;

@end
