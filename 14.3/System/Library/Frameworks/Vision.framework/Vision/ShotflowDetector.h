@class NSArray, NSString, NSSet, ShotflowNetwork;

@interface ShotflowDetector : NSObject {
    ShotflowNetwork *_network;
}

@property (class, readonly) Class shotflowNetworkClass;
@property (class, readonly) NSArray *filterThresholds;
@property (class, readonly) float networkThreshold;
@property (class, readonly) NSString *modelName;
@property (class, readonly) NSString *inputLayerName;
@property (class, readonly) struct CGSize { double x0; double x1; } inputImageSize;
@property (class, readonly) float inputImageMinDimension;
@property (class, readonly) float inputImageMaxDimension;
@property (class, readonly) float inputImageAspectRatio;
@property (class, readonly) NSSet *supportedLabelKeys;

@property (nonatomic) float threshold;
@property (retain, nonatomic) NSArray *filterThreshold;
@property (nonatomic) float nmsThreshold;
@property (nonatomic) float osfsThreshold;
@property (nonatomic) float osfsSizeRatio;
@property (nonatomic) float olmcsThreshold;
@property (nonatomic) int olmcsMergeCountDelta;
@property (nonatomic) float smartThreshold;
@property (nonatomic) float smartDistanceFactor;

+ (id)processingDeviceDetectorWithModelPath:(id)a0 networkThreshold:(float)a1 filterThreshold:(id)a2 preferredDeviceID:(int)a3 engineID:(int)a4 storageType:(int)a5;
+ (id)processingDeviceDetectorWithEspressoNetwork:(struct { void *x0; int x1; })a0 espressoPlan:(void *)a1;
+ (id)processingDeviceDetectorWithModelPath:(id)a0 preferredDeviceID:(int)a1 engineID:(int)a2 storageType:(int)a3;
+ (id)processingDeviceDetectorWithEspressoNetwork:(struct { void *x0; int x1; })a0 espressoPlan:(void *)a1 networkThreshold:(float)a2 filterThreshold:(id)a3;
+ (struct CGSize { double x0; double x1; })getSuggestedImageSize:(struct CGSize { double x0; double x1; })a0;
+ (id)modelName;

- (void).cxx_destruct;
- (id)processBoxes:(id)a0 withHeight:(float)a1 andWidth:(float)a2;
- (id)sortBoxes:(id)a0 filterThresholdIndex:(unsigned long long)a1;
- (id)detect:(const struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 inputIsBGR:(BOOL)a1;
- (id)detectAndProcessObjects:(const struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 inputIsBGR:(BOOL)a1;
- (id)mergeBoxes:(id)a0;
- (id)filterBoxes:(id)a0;
- (id)enforceSquareFaces:(id)a0 withHeight:(float)a1 andWidth:(float)a2;
- (id)overlappingSmallFacesSuppression:(id)a0;
- (id)overlappingLowMergeCountSuppression:(id)a0;
- (id)smartMergeBoxes:(id)a0;
- (id)nmsBoxes:(id)a0;
- (id)initWithNetwork:(id)a0;
- (id)initWithNetwork:(id)a0 filterThreshold:(id)a1;

@end
