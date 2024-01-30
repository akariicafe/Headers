@class PXGExposureBlurKernel;

@interface PXGExposureBlurEffect : PXGOffscreenEffect {
    PXGExposureBlurKernel *_kernel;
}

@property (nonatomic) double radius;
@property (nonatomic) double exposure;

- (id)kernel;
- (id)initWithEntityManager:(id)a0;
- (void).cxx_destruct;

@end
