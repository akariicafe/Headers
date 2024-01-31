@interface CNContainerNameDescription : CNContainerPropertyDescription

- (id)key;
- (BOOL)isWritable;
- (BOOL)isNonnull;
- (id)CNValueForContainer:(id)a0;
- (int)abPropertyID;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
