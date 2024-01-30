@interface CNContainerIOSLegacyIdentifierDescription : CNContainerPropertyDescription

- (Class)valueClass;
- (void *)ABValueForABSource:(void *)a0;
- (BOOL)setABValue:(void *)a0 onABSource:(void *)a1 error:(struct __CFError **)a2;
- (id)key;
- (BOOL)isWritable;
- (id)CNValueForContainer:(id)a0;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
