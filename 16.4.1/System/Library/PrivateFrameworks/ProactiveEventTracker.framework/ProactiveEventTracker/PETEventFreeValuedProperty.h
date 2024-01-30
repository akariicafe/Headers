@interface PETEventFreeValuedProperty : PETEventProperty

- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (id)initWithName:(id)a0;
- (BOOL)isValidValue:(id)a0;
- (id)longestValueString;
- (unsigned long long)cardinality;
- (id)description;
- (id)possibleValues;

@end
