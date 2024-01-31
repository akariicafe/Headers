@interface CNContainerIdentifierDescription : CNContainerPropertyDescription

- (Class)valueClass;
- (id)CNValueFromABValue:(void *)a0;
- (id)key;
- (void *)ABValueFromCNValue:(id)a0;
- (BOOL)isNonnull;
- (id)CNValueForContainer:(id)a0;
- (int)abPropertyID;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
