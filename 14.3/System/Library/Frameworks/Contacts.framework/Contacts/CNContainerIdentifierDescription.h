@interface CNContainerIdentifierDescription : CNContainerPropertyDescription

- (Class)valueClass;
- (void *)ABValueFromCNValue:(id)a0;
- (id)key;
- (BOOL)isNonnull;
- (id)CNValueForContainer:(id)a0;
- (void)setCNValue:(id)a0 onContainer:(id)a1;
- (id)CNValueFromABValue:(void *)a0;
- (int)abPropertyID;

@end
