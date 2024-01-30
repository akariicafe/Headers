@interface NUVideoFrameSourceNode : NUSourceNode {
    long long _orientation;
}

- (id)initWithSettings:(id)a0;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)_evaluateImageWithSourceOptions:(id)a0 subsampleFactor:(long long *)a1 error:(out id *)a2;
- (id)applySourceOptions:(id)a0 image:(id)a1;
- (id)initWithSettings:(id)a0 orientation:(long long)a1;
- (struct { long long x0; long long x1; })pixelSizeWithSourceOptions:(id)a0;
- (long long)sourceOrientation;

@end
