@class PXGPolarBlurKernel;

@interface PXGRadialMotionBlurEffect : PXGMotionBlurEffect {
    PXGPolarBlurKernel *_polarBlur;
}

- (id)kernel;
- (void).cxx_destruct;

@end
