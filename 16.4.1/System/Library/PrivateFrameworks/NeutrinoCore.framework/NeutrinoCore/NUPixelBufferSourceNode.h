@interface NUPixelBufferSourceNode : NUVideoFrameSourceNode

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;

- (void)dealloc;
- (id)_evaluateImageWithSourceOptions:(id)a0 subsampleFactor:(long long *)a1 error:(out id *)a2;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 settings:(id)a1 orientation:(long long)a2;
- (id)initWithSettings:(id)a0 orientation:(long long)a1;
- (struct { long long x0; long long x1; })pixelSizeWithSourceOptions:(id)a0;

@end
