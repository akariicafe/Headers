@interface WebGPULayer : CAMetalLayer {
    float _deviceScaleFactor;
}

@property (nonatomic) struct GPUSwapChain { unsigned int x0; struct RetainPtr<WebGPULayer> { void *x0; } x1; struct RetainPtr<CAMetalDrawable> { void *x0; } x2; struct OptionSet<WebCore::GPUTextureUsage::Flags> { unsigned int x0; } x3; } *swapChain;

- (id)init;
- (struct CGImage { } *)copyImageSnapshotWithColorSpace:(struct CGColorSpace { } *)a0;

@end
