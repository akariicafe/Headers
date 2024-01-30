@interface CNContainerExternalSyncTagDescription : CNContainerPropertyDescription

- (id)key;
- (BOOL)isWritable;
- (Class)valueClass;
- (id)CNValueForContainer:(id)a0;
- (int)abPropertyID;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
