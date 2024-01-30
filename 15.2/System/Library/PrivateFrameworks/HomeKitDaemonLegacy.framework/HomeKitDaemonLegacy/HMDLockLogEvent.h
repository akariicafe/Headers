@class NSString, NSDictionary;

@interface HMDLockLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy, nonatomic) NSString *accessoryUUID;
@property (readonly, copy, nonatomic) NSString *lockStatus;
@property (readonly, copy, nonatomic) NSString *characteristicUUID;
@property (readonly, copy, nonatomic) NSString *homeUUID;
@property (readonly, copy, nonatomic) NSString *timeStamp;
@property (readonly, copy, nonatomic) NSString *homePresence;


- (void).cxx_destruct;
- (id)initWithLockStatus:(id)a0 accessoryUUID:(id)a1 characteristicUUID:(id)a2 timeStamp:(id)a3 homeUUID:(id)a4 homePresence:(id)a5;

@end
