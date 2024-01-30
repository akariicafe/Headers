@interface ARObjectScanningConfiguration : ARConfiguration

@property (nonatomic, getter=isMLModelEnabled) BOOL mlModelEnabled;
@property (nonatomic, getter=isLowQosSchedulingEnabled) BOOL lowQosSchedulingEnabled;
@property (nonatomic) BOOL deliverRawSceneUnderstandingResults;
@property (nonatomic, getter=isAutoFocusEnabled) BOOL autoFocusEnabled;
@property (nonatomic) unsigned long long planeDetection;

+ (BOOL)isSupported;
+ (id)new;
+ (id)supportedVideoFormats;
+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)createTechniques:(id)a0;
- (id)imageSensorSettings;

@end
