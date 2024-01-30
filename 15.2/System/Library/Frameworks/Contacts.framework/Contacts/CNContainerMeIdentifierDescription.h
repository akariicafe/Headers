@interface CNContainerMeIdentifierDescription : CNContainerPropertyDescription

- (void *)ABValueFromCNValue:(id)a0;
- (int)abPropertyID;
- (Class)valueClass;
- (id)key;
- (id)CNValueFromABValue:(void *)a0;
- (BOOL)isWritable;
- (id)CNValueForContainer:(id)a0;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
