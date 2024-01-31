@interface CNContainerIOSLegacyIdentifierDescription : CNContainerPropertyDescription

- (Class)valueClass;
- (id)key;
- (BOOL)isWritable;
- (void *)ABValueForABSource:(void *)a0;
- (id)CNValueForContainer:(id)a0;
- (BOOL)setABValue:(void *)a0 onABSource:(void *)a1 error:(struct __CFError **)a2;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
