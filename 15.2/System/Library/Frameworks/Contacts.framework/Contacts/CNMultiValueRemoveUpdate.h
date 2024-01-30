@interface CNMultiValueRemoveUpdate : CNMultiValueSingleUpdate

- (BOOL)applyToABPerson:(void *)a0 abmultivalue:(void *)a1 propertyDescription:(id)a2 logger:(id)a3 error:(id *)a4;
- (void)applyToMutableMultiValue:(id)a0 withIdentifierMap:(id)a1;

@end
