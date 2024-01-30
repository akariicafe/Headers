@class NSString;

@interface BWStartupCalibrationAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (retain, nonatomic) NSString *portType;
@property (nonatomic) float accelStandardDeviation;
@property (nonatomic) float gyroStandardDeviation;
@property (nonatomic) float sessionOffset;
@property (nonatomic) float deltaOffset;
@property (nonatomic) int apsVoltage;
@property (nonatomic) float maxAcceleration;
@property (nonatomic) float deltaAcceleration;
@property (nonatomic) BOOL headroomErrorOccurred;
@property (nonatomic) BOOL convergeErrorOccurred;
@property (nonatomic) BOOL motionErrorOccurred;
@property (nonatomic) BOOL confidenceErrorOccurred;
@property (nonatomic) BOOL largeOffsetErrorOccurred;
@property (nonatomic) BOOL saturationErrorOccurred;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL gcolEntry;
@property (nonatomic) BOOL closedLoopEntry;
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
