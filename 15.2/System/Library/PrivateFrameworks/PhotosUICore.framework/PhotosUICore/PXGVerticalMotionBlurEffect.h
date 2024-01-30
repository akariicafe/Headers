@class PXGMotionBlurKernel;

@interface PXGVerticalMotionBlurEffect : PXGMotionBlurEffect {
    PXGMotionBlurKernel *_motionBlur;
}

- (id)kernel;
- (void).cxx_destruct;

@end
