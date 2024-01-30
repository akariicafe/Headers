@interface CNContainerMeIdentifierDescription : CNContainerPropertyDescription

- (Class)valueClass;
- (BOOL)isWritable;
- (void *)ABValueFromCNValue:(id)a0;
- (id)key;
- (id)CNValueForContainer:(id)a0;
- (void)setCNValue:(id)a0 onContainer:(id)a1;
- (id)CNValueFromABValue:(void *)a0;
- (int)abPropertyID;

@end
