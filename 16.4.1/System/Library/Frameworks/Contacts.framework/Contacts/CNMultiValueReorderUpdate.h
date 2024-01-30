@class NSOrderedSet;

@interface CNMultiValueReorderUpdate : CNMultiValueUpdate

@property (readonly, copy, nonatomic) NSOrderedSet *values;

- (id)description;
- (id)initWithValues:(id)a0;
- (void).cxx_destruct;
- (BOOL)applyToABPerson:(void *)a0 abmultivalue:(void *)a1 propertyDescription:(id)a2 isUnified:(BOOL)a3 logger:(id)a4 error:(id *)a5;
- (void)applyToMutableMultiValue:(id)a0 withIdentifierMap:(id)a1;
- (long long)compareIndexOfIdentifier:(id)a0 toIndexOfIdentifier:(id)a1;

@end
