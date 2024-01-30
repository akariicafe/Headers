@class NSString, NSDictionary;

@interface HMDLightBrightnessLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy, nonatomic) NSString *accessoryUUID;
@property (readonly, copy, nonatomic) NSString *brightness;
@property (readonly, copy, nonatomic) NSString *characteristicUUID;
@property (readonly, copy, nonatomic) NSString *homeUUID;
@property (readonly, copy, nonatomic) NSString *timeStamp;
@property (readonly, copy, nonatomic) NSString *eventOrder;
@property (readonly, copy, nonatomic) NSString *sunRiseTime;
@property (readonly, copy, nonatomic) NSString *sunSetTime;
@property (readonly, copy, nonatomic) NSString *homePresence;
@property (readonly, copy, nonatomic) NSString *regionRange;
@property (readonly, copy, nonatomic) NSString *luxLevel;


- (void).cxx_destruct;
- (id)initWithBrightness:(id)a0 accessoryUUID:(id)a1 characteristicUUID:(id)a2 timeStamp:(id)a3 homeUUID:(id)a4 eventOrder:(id)a5 sunRiseTime:(id)a6 sunSetTime:(id)a7 homePresence:(id)a8 regionRange:(id)a9 luxLevel:(id)a10;

@end
