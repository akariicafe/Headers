@class BWPixelBufferPool, NSDictionary, NSArray, NSData, NSObject;
@protocol OS_dispatch_semaphore;

@interface BWVISProcessorControllerConfiguration : NSObject

@property (nonatomic) int transformPlatform;
@property (nonatomic) int smoothingMethod;
@property (retain, nonatomic) NSDictionary *inputPixelBufferAttributes;
@property (retain, nonatomic) NSDictionary *outputPixelBufferAttributes;
@property (retain, nonatomic) BWPixelBufferPool *outputPixelBufferPool;
@property (retain, nonatomic) BWPixelBufferPool *outputDepthPixelBufferPool;
@property (retain, nonatomic) NSDictionary *sensorIDDict;
@property (nonatomic) float cinematicLookAheadTime;
@property (nonatomic) unsigned int cinematicLookAheadFrameCount;
@property (nonatomic) BOOL useISPMotionData;
@property (nonatomic) BOOL sphereCorrectionEnabled;
@property (nonatomic) BOOL sphereVideoEnabled;
@property (nonatomic) BOOL frameRateConversionEnabled;
@property (nonatomic) BOOL videoStabilizationDisabled;
@property (nonatomic) BOOL blurBorderPixels;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } livePhotoCleanOutputRect;
@property (nonatomic) BOOL onlyGenerateTransformsParameters;
@property (nonatomic) BOOL attachStabilizedOutputCenterQuaternion;
@property (nonatomic) BOOL attachStabilizedTrajectoryHomography;
@property (nonatomic) BOOL attachEstimatedMotionVector;
@property (nonatomic) BOOL p3ToBT2020ConversionEnabled;
@property (nonatomic) int gpuPriority;
@property (nonatomic) unsigned int extendedOutputRowsToFill;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *emitSampleBufferSemaphore;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (retain, nonatomic) NSArray *distortionCompensationEnabledPortTypes;
@property (nonatomic) float minDistanceForBravoParallaxShift;
@property (retain, nonatomic) NSDictionary *videoSTFParameters;
@property (retain, nonatomic) NSDictionary *videoGreenGhostMitigationParameters;
@property (nonatomic) int videoStabilizationStrength;
@property (nonatomic) BOOL zoomSmoothingEnabled;
@property (nonatomic) BOOL applyFrameCropOffset;
@property (retain, nonatomic) NSData *cameraExtrinsicMatrix;

- (void)dealloc;

@end
