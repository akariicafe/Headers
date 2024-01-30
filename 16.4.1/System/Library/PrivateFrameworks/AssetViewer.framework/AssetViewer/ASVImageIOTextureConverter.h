@interface ASVImageIOTextureConverter : ASVTextureConverter

- (BOOL)canConvertTextureWithDescription:(id)a0;
- (long long)converterType;
- (struct { unsigned long long x0; unsigned long long x1; })estimatedMemoryDeltaForTextureWithDescription:(id)a0;
- (long long)maxNativeDownsamplingFactorForDownsamplingFactor:(long long)a0 fileType:(long long)a1;

@end
