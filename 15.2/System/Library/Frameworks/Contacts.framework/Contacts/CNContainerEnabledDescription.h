@interface CNContainerEnabledDescription : CNContainerPropertyDescription

- (int)abPropertyID;
- (Class)valueClass;
- (id)key;
- (BOOL)isWritable;
- (id)CNValueForContainer:(id)a0;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
