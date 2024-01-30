@interface CNContainerNameDescription : CNContainerPropertyDescription

- (BOOL)isWritable;
- (id)key;
- (BOOL)isNonnull;
- (id)CNValueForContainer:(id)a0;
- (void)setCNValue:(id)a0 onContainer:(id)a1;
- (int)abPropertyID;

@end
