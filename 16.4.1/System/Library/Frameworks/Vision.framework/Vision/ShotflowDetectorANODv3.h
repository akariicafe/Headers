@interface ShotflowDetectorANODv3 : ShotflowDetectorANODBase

@property (class, readonly) float defaultFaceDetectionPrecisionRecallThreshold;

@property (nonatomic) float faceDetectionPrecisionRecallThreshold;

+ (id)filterThresholds;
+ (Class)shotflowNetworkClass;
+ (id)supportedLabelKeys;

- (id)initWithNetwork:(id)a0;
- (id)getIndexBoxes:(id)a0 filterThresholdIndex:(unsigned long long)a1;
- (id)nmsBoxes:(id)a0;
- (id)processBoxes:(id)a0 withHeight:(float)a1 andWidth:(float)a2;
- (id)initWithNetwork:(id)a0 filterThresholds:(id)a1;

@end
