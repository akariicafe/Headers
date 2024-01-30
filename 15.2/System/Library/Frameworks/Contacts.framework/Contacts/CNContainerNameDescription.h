@interface CNContainerNameDescription : CNContainerPropertyDescription

- (BOOL)isNonnull;
- (int)abPropertyID;
- (id)key;
- (BOOL)isWritable;
- (id)CNValueForContainer:(id)a0;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
