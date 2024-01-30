@class CIImage;

@interface NUCISourceNode : NUSourceNode {
    CIImage *_image;
    long long _orientation;
}

- (id)initWithSettings:(id)a0;
- (void).cxx_destruct;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)_evaluateImageWithSourceOptions:(id)a0 subsampleFactor:(long long *)a1 error:(out id *)a2;
- (id)initWithImage:(id)a0 identifier:(id)a1 orientation:(long long)a2;
- (id)initWithImage:(id)a0 settings:(id)a1 orientation:(long long)a2;
- (struct { long long x0; long long x1; })pixelSizeWithSourceOptions:(id)a0;
- (long long)sourceOrientation;
- (BOOL)supportsPipelineState:(id)a0 error:(out id *)a1;

@end
