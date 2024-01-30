@interface PXGKernel : NSObject

+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })gridSizeForThreadGroupSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 imageSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })groupSizeForImageSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 pipelineState:(id)a1;
+ (id)pipelineStateForFunctionWithName:(id)a0 constants:(id)a1 key:(id)a2 device:(id)a3;

- (void)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2 targetScale:(double)a3;
- (void)preloadWithDevice:(id)a0;

@end
