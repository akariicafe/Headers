@interface ASVImageIOTextureConverter : ASVTextureConverter

- (long long)maxNativeDownsamplingFactorForDownsamplingFactor:(long long)a0 fileType:(long long)a1;
- (long long)converterType;
- (BOOL)canConvertTextureWithDescription:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; })estimatedMemoryDeltaForTextureWithDescription:(id)a0;

@end
