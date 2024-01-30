@class NSOrderedSet;

@interface CNMultiValueReorderUpdate : CNMultiValueUpdate

@property (readonly, copy, nonatomic) NSOrderedSet *values;

- (id)description;
- (BOOL)applyToABPerson:(void *)a0 abmultivalue:(void *)a1 propertyDescription:(id)a2 logger:(id)a3 error:(id *)a4;
- (void).cxx_destruct;
- (id)initWithValues:(id)a0;
- (long long)compareIndexOfIdentifier:(id)a0 toIndexOfIdentifier:(id)a1;
- (void)applyToMutableMultiValue:(id)a0 withIdentifierMap:(id)a1;

@end
