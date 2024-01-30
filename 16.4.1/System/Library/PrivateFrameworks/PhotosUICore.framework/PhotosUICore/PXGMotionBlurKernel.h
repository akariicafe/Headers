@class MPSImageBox;

@interface PXGMotionBlurKernel : PXGKernel {
    MPSImageBox *_boxKernel;
}

@property (nonatomic) long long direction;
@property (nonatomic) double size;

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2 targetScale:(double)a3;
- (void)preloadWithDevice:(id)a0;

@end
