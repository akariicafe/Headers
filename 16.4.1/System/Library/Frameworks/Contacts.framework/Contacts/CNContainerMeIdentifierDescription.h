@interface CNContainerMeIdentifierDescription : CNContainerPropertyDescription

- (id)key;
- (BOOL)isWritable;
- (Class)valueClass;
- (id)CNValueFromABValue:(void *)a0;
- (void *)ABValueFromCNValue:(id)a0;
- (id)CNValueForContainer:(id)a0;
- (int)abPropertyID;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
