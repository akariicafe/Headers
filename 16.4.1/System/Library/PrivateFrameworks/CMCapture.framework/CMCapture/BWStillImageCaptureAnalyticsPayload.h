@class NSString, NSDictionary;

@interface BWStillImageCaptureAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) BOOL deferred;
@property (nonatomic) int activeDeviceMask;
@property (nonatomic) int devicePosition;
@property (nonatomic) int deviceType;
@property (retain, nonatomic) NSString *constituentImageDeliveryDeviceTypes;
@property (nonatomic) int captureType;
@property (nonatomic) unsigned long long captureFlags;
@property (nonatomic) unsigned int processingFlags;
@property (nonatomic) unsigned long long sceneFlags;
@property (nonatomic) int processingDuration;
@property (nonatomic) int streamingTime;
@property (nonatomic) int shutterLag;
@property (nonatomic) float zoom;
@property (nonatomic) float uiZoom;
@property (nonatomic) int luxLevel;
@property (nonatomic) int alsLuxLevel;
@property (nonatomic) float alsRearLuxLevel;
@property (nonatomic) float lensPosition;
@property (nonatomic) int sensorTemperature;
@property (nonatomic) float exposureDuration;
@property (nonatomic) float iso;
@property (nonatomic) float normalizedSNR;
@property (nonatomic) float SNR;
@property (nonatomic) int numberOfFaces;
@property (nonatomic) int numberOfFacesWithVisionFaceDetection;
@property (nonatomic) float largestFaceHeight;
@property (nonatomic) float smallestFaceHeight;
@property (nonatomic) int numberOfFacesAtEdge;
@property (nonatomic) int numberOfFacesAtCenter;
@property (copy, nonatomic) NSString *clientApplicationID;
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
@property (nonatomic) int imageExifOrientation;
@property (retain, nonatomic) NSString *sphereMode;
@property (nonatomic) unsigned int apsMode;
@property (nonatomic) unsigned int timeSinceLastCaptureInSession;
@property (nonatomic) float flashBrightnessRatio;
@property (retain, nonatomic) NSDictionary *oisRecenteringLoggingData;
@property (nonatomic) float effectiveIntegrationTime;
@property (nonatomic) int intelligentDistortionCorrectionStatusCode;
@property (nonatomic) int intelligentDistortionCorrectionGainMapProcessingStatusCode;
@property (nonatomic) int intelligentDistortionCorrectionCorrectionType;
@property (nonatomic) BOOL geometricDistortionCorrectionEnabled;
@property (retain, nonatomic) NSString *geometricDistortionCorrectionSource;
@property (nonatomic) int greenGhostMitigationBrightLightIsBrightScene;
@property (nonatomic) int greenGhostMitigationBrightLightROIIsComputed;
@property (nonatomic) int greenGhostMitigationLowLightExceedsMaxMaskAverage;
@property (nonatomic) int greenGhostMitigationLowLightSkipRepair;
@property (nonatomic) int greenGhostMitigationLowLightTripodMode;
@property (nonatomic) float greenGhostMitigationLowLightMaskAverage;
@property (nonatomic) int ispMotionHighPassFilterConvergenceFlags;
@property (retain, nonatomic) NSDictionary *timeOfFlightAssistedAutoFocusEstimatorData;
@property (retain, nonatomic) NSDictionary *timeOfFlightFlickerDetectionData;
@property (retain, nonatomic) NSDictionary *leaderFollowerAutoFocusData;
@property (nonatomic) BOOL afDriverShortOccurred;
@property (nonatomic) int formatDimensionWidth;
@property (nonatomic) int formatDimensionHeight;
@property (nonatomic) int deliveredDimensionWidth;
@property (nonatomic) int deliveredDimensionHeight;
@property (nonatomic) int formatMaxFrameRate;
@property (nonatomic) int qualityPrioritization;
@property (nonatomic) int clientRequestedQualityPrioritization;
@property (nonatomic) BOOL highQualityPhotoWithVideoFormatSupported;
@property (nonatomic) BOOL photoFormat;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) BOOL binned;
@property (nonatomic) unsigned int bitDepth;
@property (nonatomic) unsigned int dngFileSize;
@property (nonatomic) unsigned int photoFileSize;
@property (nonatomic) unsigned int outputFileType;
@property (nonatomic) unsigned int thumbnailImageSize;
@property (nonatomic) unsigned int auxiliaryImagesSize;
@property (nonatomic) BOOL portraitRequested;
@property (retain, nonatomic) NSString *portraitEffectStatus;
@property (nonatomic) BOOL fastCapturePrioritizationEnabled;
@property (nonatomic) BOOL stfStillSupported;
@property (nonatomic) BOOL stfStillApplied;
@property (nonatomic) int stfStillCorrectionStrength;
@property (nonatomic) unsigned int stfStillAnalyticsVersion;
@property (nonatomic) BOOL semanticStyleRenderingSupported;
@property (nonatomic) int semanticSceneType;
@property (nonatomic) float semanticStyleToneBias;
@property (nonatomic) float semanticStyleWarmthBias;
@property (nonatomic) BOOL depthDataDeliveryEnabled;
@property (nonatomic) unsigned int depthFormatDimensionWidth;
@property (nonatomic) unsigned int depthFormatDimensionHeight;
@property (nonatomic) unsigned int depthPixelFormat;
@property (nonatomic) BOOL depthDataFiltered;
@property (nonatomic) BOOL swfrApplied;
@property (nonatomic) int swfrForegroundCorrectionStrength;
@property (nonatomic) int swfrBackgroundCorrectionStrength;
@property (nonatomic) float swfrForegroundCorrectionDirection;
@property (nonatomic) float swfrBackgroundCorrectionDirection;
@property (nonatomic) unsigned int swfrAnalyticsVersion;
@property (nonatomic) int redEyeReductionStatus;
@property (nonatomic) BOOL deliverAsCameraAppSpecificEvent;
@property (nonatomic) BOOL cameraSettingEnabled;
@property (nonatomic) float cameraProbability;
@property (nonatomic) float cameraConfidence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventName;
- (id)eventDictionary;
- (void)dealloc;
- (id)init;
- (void)reset;

@end
