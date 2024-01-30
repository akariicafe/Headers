@class NSUUID, NSString;

@interface HMDProcessLaunchInfoLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging>

@property (class, readonly, copy) NSUUID *uuid;

@property (readonly, copy, nonatomic) NSString *dataSyncState;
@property (readonly) double timeSincePreviousProcessLaunch;
@property (readonly) double timeSinceLaunchToDataSyncStateGood;

- (id)eventName;
- (void).cxx_destruct;
- (id)serializedEvent;
- (id)initWithDataSyncState:(id)a0 timeSincePreviousProcessLaunch:(double)a1 timeSinceLaunchToDataSyncStateGood:(double)a2;

@end
