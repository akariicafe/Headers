@class NSString, NSDictionary;

@interface BWStillImageCaptureAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) int activeDeviceMask;
@property (nonatomic) int devicePosition;
@property (nonatomic) int deviceType;
@property (nonatomic) int captureType;
@property (nonatomic) unsigned long long captureFlags;
@property (nonatomic) unsigned int processingFlags;
@property (nonatomic) unsigned long long sceneFlags;
@property (nonatomic) int processingDuration;
@property (nonatomic) int streamingTime;
@property (nonatomic) int shutterLag;
@property (nonatomic) float zoom;
@property (nonatomic) int luxLevel;
@property (nonatomic) float lensPosition;
@property (nonatomic) int sensorTemperature;
@property (nonatomic) float exposureDuration;
@property (nonatomic) float iso;
@property (nonatomic) float normalizedSNR;
@property (nonatomic) float SNR;
@property (nonatomic) int numberOfFaces;
@property (nonatomic) int clientIDType;
@property (nonatomic) BOOL livePhotoEnabled;
@property (nonatomic) BOOL depthEnabled;
@property (nonatomic) BOOL timeLapse;
@property (nonatomic) BOOL burst;
@property (retain, nonatomic) NSString *portType;
@property (nonatomic) float accelStandardDeviation;
@property (nonatomic) float gyroStandardDeviation;
@property (retain, nonatomic) NSDictionary *apsSubjectDistance;
@property (retain, nonatomic) NSDictionary *practicalFocalLength;
@property (retain, nonatomic) NSDictionary *focusingMethod;
@property (nonatomic) float maxSphereTrackingError;
@property (nonatomic) float stdSphereTrackingError;
@property (nonatomic) float maxAFTrackingError;
@property (nonatomic) float stdAFTrackingError;
@property (nonatomic) float minDistanceFromSphereEndStop;
@property (nonatomic) float spherePowerConsumption;
@property (nonatomic) float afPowerConsumption;
@property (nonatomic) unsigned int cameraPosture;
@property (retain, nonatomic) NSString *sphereMode;
@property (nonatomic) unsigned int apsMode;
@property (nonatomic) unsigned int timeSinceLastCaptureInSession;
@property (nonatomic) float flashBrightnessRatio;
@property (retain, nonatomic) NSDictionary *oisRecenteringLoggingData;
@property (nonatomic) float effectiveIntegrationTime;
@property (nonatomic) int intelligentDistortionCorrectionStatusCode;
@property (nonatomic) int intelligentDistortionCorrectionGainMapProcessingStatusCode;
@property (nonatomic) int intelligentDistortionCorrectionCorrectionType;
@property (nonatomic) int ispMotionHighPassFilterConvergenceFlags;
@property (retain, nonatomic) NSDictionary *timeOfFlightAssistedAutoFocusEstimatorData;
@property (nonatomic) BOOL afDriverShortOccurred;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventName;
- (id)init;
- (void)reset;
- (void)dealloc;
- (id)eventDictionary;

@end
