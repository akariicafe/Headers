@interface CNContainerMeIdentifierDescription : CNContainerPropertyDescription

- (Class)valueClass;
- (id)CNValueFromABValue:(void *)a0;
- (id)key;
- (BOOL)isWritable;
- (void *)ABValueFromCNValue:(id)a0;
- (id)CNValueForContainer:(id)a0;
- (int)abPropertyID;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
