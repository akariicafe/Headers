@class NSString, NSSet, NSDictionary;

@interface BWStreamingSessionAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    int _clientIDType;
}

@property (nonatomic) unsigned int activeDeviceMask;
@property (nonatomic) int deviceType;
@property (nonatomic) int devicePosition;
@property (nonatomic) int startingCameraPosture;
@property (nonatomic) int streamingStartExifOrientation;
@property (nonatomic) unsigned int streamingTime;
@property (copy, nonatomic) NSString *clientApplicationID;
@property (retain, nonatomic) NSSet *sunburnDetectOccurred;
@property (retain, nonatomic) NSDictionary *degradedAutoFocusStatus;
@property (retain, nonatomic) NSDictionary *numberOfSphereJitterDetectAttempts;
@property (retain, nonatomic) NSDictionary *numberOfSphereJitterDetects;
@property (retain, nonatomic) NSDictionary *actuatorVendor;
@property (retain, nonatomic) NSString *sphereMode;
@property (nonatomic) unsigned int numberOfPhotoCaptures;
@property (nonatomic) unsigned int numberOfBurstPhotoCaptures;
@property (nonatomic) unsigned int numberOfBalancedPhotoCaptures;
@property (nonatomic) unsigned int timeToFirstPhotoCapture;
@property (nonatomic) unsigned int maxTimeSinceLastPhotoCapture;
@property (nonatomic) unsigned int minTimeSinceLastPhotoCapture;
@property (nonatomic) unsigned int numberOfButtonMashingCapturesAtRate0;
@property (nonatomic) unsigned int numberOfButtonMashingCapturesAtRate1;
@property (nonatomic) unsigned int numberOfButtonMashingEventsAtRate0;
@property (nonatomic) unsigned int numberOfButtonMashingEventsAtRate1;
@property (nonatomic) unsigned int timeOfFlightCameraProjectorModeMask;
@property (nonatomic) unsigned int timeOfFlightCameraUsageTypeMask;
@property (nonatomic) float structuredLightIdleTemperatureFirstReading;
@property (nonatomic) float structuredLightActiveTemperatureFirstReading;
@property (nonatomic) float structuredLightActiveTemperatureLastReading;
@property (nonatomic) float structuredLightActiveTemperatureRange;
@property (nonatomic) float structuredLightActiveTemperatureAverage;
@property (nonatomic) float infaredSensorTemperatureRange;
@property (nonatomic) float infaredSensorTemperatureAverage;
@property (retain, nonatomic) NSDictionary *sensorTemperatureStats;
@property (nonatomic) float averageSystemPressureLevel;
@property (nonatomic) int maxSystemPressureLevel;
@property (nonatomic) long long timeToCriticalSystemPressureInMS;
@property (nonatomic) unsigned int systemPressureFactors;
@property (nonatomic) BOOL cinematicFramingSupported;
@property (nonatomic) BOOL cinematicFramingEnabled;
@property (nonatomic) unsigned int cinematicFramingControlMode;
@property (nonatomic) BOOL backgroundBlurSupported;
@property (nonatomic) BOOL backgroundBlurEnabled;
@property (nonatomic) BOOL cinematicVideoEnabled;
@property (nonatomic) float cinematicVideoAverageRenderingTime;
@property (nonatomic) float cinematicVideoWorstCaseRenderingTime;
@property (nonatomic) unsigned int timeOfFlightAssistedAutoFocusStreamingTimeAt0FPS;
@property (nonatomic) unsigned int timeOfFlightAssistedAutoFocusStreamingTimeAt1FPS;
@property (nonatomic) unsigned int timeOfFlightAssistedAutoFocusStreamingTimeAt8FPS;
@property (nonatomic) unsigned int timeOfFlightAssistedAutoFocusStreamingTimeAtOtherFPS;
@property (nonatomic) unsigned int captureDeviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventDictionary;
- (id)init;
- (id)eventName;
- (void)dealloc;
- (void)reset;

@end
