@class NSOrderedSet;

@interface CNMultiValueReorderUpdate : CNMultiValueUpdate

@property (readonly, copy, nonatomic) NSOrderedSet *values;

- (BOOL)applyToABPerson:(void *)a0 abmultivalue:(void *)a1 propertyDescription:(id)a2 logger:(id)a3 error:(id *)a4;
- (void).cxx_destruct;
- (long long)compareIndexOfIdentifier:(id)a0 toIndexOfIdentifier:(id)a1;
- (id)description;
- (void)applyToMutableMultiValue:(id)a0 withIdentifierMap:(id)a1;
- (id)initWithValues:(id)a0;

@end
