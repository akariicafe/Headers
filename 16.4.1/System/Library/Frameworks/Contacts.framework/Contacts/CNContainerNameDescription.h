@interface CNContainerNameDescription : CNContainerPropertyDescription

- (id)key;
- (BOOL)isNonnull;
- (BOOL)isWritable;
- (id)CNValueForContainer:(id)a0;
- (int)abPropertyID;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
