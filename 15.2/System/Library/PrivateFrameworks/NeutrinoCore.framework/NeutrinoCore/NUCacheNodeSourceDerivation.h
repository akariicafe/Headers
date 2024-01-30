@interface NUCacheNodeSourceDerivation : NSObject <NUSourceDerivation> {
    long long _subsampleFactor;
}

- (id)init;
- (struct { long long x0; long long x1; })scaleFromOriginalSize:(struct { long long x0; long long x1; })a0 derivativeSize:(struct { long long x0; long long x1; })a1;
- (long long)orientationFromOriginal:(long long)a0 derivativeOrientation:(long long)a1;
- (id)initWithSubsampleFactor:(long long)a0;

@end
