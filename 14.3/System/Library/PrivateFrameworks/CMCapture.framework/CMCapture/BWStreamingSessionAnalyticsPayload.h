@class NSSet, NSDictionary, NSString;

@interface BWStreamingSessionAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) unsigned int activeDeviceMask;
@property (nonatomic) int deviceType;
@property (nonatomic) int devicePosition;
@property (nonatomic) unsigned int streamingTime;
@property (nonatomic) int clientIDType;
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
