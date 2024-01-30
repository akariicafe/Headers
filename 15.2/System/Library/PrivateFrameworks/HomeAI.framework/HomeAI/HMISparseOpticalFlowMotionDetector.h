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
- (id)calculateMotionDetection:(struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x0; } x2; })a0 score:(struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })a1 srcFeatureCVPoints:(struct vector<cv::Point_<float>, std::allocator<cv::Point_<float>>> { void *x0; void *x1; struct __compressed_pair<cv::Point_<float> *, std::allocator<cv::Point_<float>>> { void *x0; } x2; })a2 dstFeatreCVPoints:(struct vector<cv::Point_<float>, std::allocator<cv::Point_<float>>> { void *x0; void *x1; struct __compressed_pair<cv::Point_<float> *, std::allocator<cv::Point_<float>>> { void *x0; } x2; })a3 activityZones:(id)a4 operationMode:(unsigned long long)a5 srcPyramid:(struct vector<cv::Mat, std::allocator<cv::Mat>> { struct Mat *x0; struct Mat *x1; struct __compressed_pair<cv::Mat *, std::allocator<cv::Mat>> { struct Mat *x0; } x2; })a6 brightnessChange:(float)a7;
- (BOOL)applyActivityZoneFilteringOnSourcePoint:(struct CGPoint { double x0; double x1; })a0 destinationPoint:(struct CGPoint { double x0; double x1; })a1 activityZones:(id)a2;
- (id)_computeOpticalFlow:(struct __CVBuffer { } *)a0 with:(struct __CVBuffer { } *)a1 globalMotionScore:(float *)a2 activityZones:(id)a3 operationMode:(unsigned long long)a4;
- (void)appendFramePixelBuffer:(struct __CVBuffer { } *)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)detectWithGlobalMotionScore:(float *)a0 activityZones:(id)a1 detectorMode:(unsigned long long)a2;

@end
