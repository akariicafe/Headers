@class PXGPolarBlurKernel;

@interface PXGRotationalMotionBlurEffect : PXGMotionBlurEffect {
    PXGPolarBlurKernel *_polarBlur;
}

- (id)kernel;
- (void).cxx_destruct;

@end
