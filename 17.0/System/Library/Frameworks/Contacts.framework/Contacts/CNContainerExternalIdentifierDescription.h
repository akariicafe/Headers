@interface CNContainerExternalIdentifierDescription : CNContainerPropertyDescription

- (Class)valueClass;
- (id)key;
- (BOOL)isWritable;
- (id)CNValueForContainer:(id)a0;
- (int)abPropertyID;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
