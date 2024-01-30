@class NSString, NSMutableArray;

@interface HMISparseOpticalFlowMotionDetector : HMFObject <HMIMotionDetector, HMFLogging>

@property (readonly) NSMutableArray *frames;
@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)appendFramePixelBuffer:(struct __CVBuffer { } *)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)detectWithGlobalMotionScore:(float *)a0;
- (id)_computeOpticalFlow:(struct __CVBuffer { } *)a0 with:(struct __CVBuffer { } *)a1 globalMotionScore:(float *)a2;

@end
