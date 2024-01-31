@interface CNMultiValueReplaceUpdate : CNMultiValueSingleUpdate

- (BOOL)applyToABPerson:(void *)a0 abmultivalue:(void *)a1 propertyDescription:(id)a2 isUnified:(BOOL)a3 logger:(id)a4 error:(id *)a5;
- (void)applyToMutableMultiValue:(id)a0 withIdentifierMap:(id)a1;

@end
