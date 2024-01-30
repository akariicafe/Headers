@interface CNContainerIOSLegacyIdentifierDescription : CNContainerPropertyDescription

- (Class)valueClass;
- (BOOL)isWritable;
- (id)key;
- (id)CNValueForContainer:(id)a0;
- (void)setCNValue:(id)a0 onContainer:(id)a1;
- (void *)ABValueForABSource:(void *)a0;
- (BOOL)setABValue:(void *)a0 onABSource:(void *)a1 error:(struct __CFError **)a2;

@end
