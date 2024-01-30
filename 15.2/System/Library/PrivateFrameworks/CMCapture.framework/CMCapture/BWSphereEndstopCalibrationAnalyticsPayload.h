@class NSString;

@interface BWSphereEndstopCalibrationAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) long long magneticFieldMagnitude;
@property (retain, nonatomic) NSString *portType;
@property (nonatomic) unsigned int calibrationStatus;
@property (nonatomic) int sphereXPosEndstop;
@property (nonatomic) int sphereXNegEndstop;
@property (nonatomic) int sphereYPosEndstop;
@property (nonatomic) int sphereYNegEndstop;
@property (nonatomic) int deltaSphereXPosEndstop;
@property (nonatomic) int deltaSphereXNegEndstop;
@property (nonatomic) int deltaSphereYPosEndstop;
@property (nonatomic) int deltaSphereYNegEndstop;
@property (nonatomic) int sphereXStroke;
@property (nonatomic) int sphereYStroke;
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
