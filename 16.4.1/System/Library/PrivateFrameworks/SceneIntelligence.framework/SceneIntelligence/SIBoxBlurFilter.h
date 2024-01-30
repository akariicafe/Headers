@protocol MTLTexture, MTLBuffer, MTLComputePipelineState;

@interface SIBoxBlurFilter : NSObject {
    id<MTLTexture> _1DBlur;
    id<MTLBuffer> _configBuffer;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _size;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _executionThreadgroup;
    id<MTLComputePipelineState> _horizontal;
    id<MTLComputePipelineState> _vertical;
}

@property (nonatomic) unsigned long long radius;

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 blurred:(id)a2;
- (id)initWithFactory:(id)a0 size:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 pixelFormat:(unsigned long long)a2 andRadius:(unsigned long long)a3;

@end
