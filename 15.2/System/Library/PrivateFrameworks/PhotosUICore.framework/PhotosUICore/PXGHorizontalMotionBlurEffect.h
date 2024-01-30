@class PXGMotionBlurKernel;

@interface PXGHorizontalMotionBlurEffect : PXGMotionBlurEffect {
    PXGMotionBlurKernel *_motionBlur;
}

- (id)kernel;
- (void).cxx_destruct;

@end
