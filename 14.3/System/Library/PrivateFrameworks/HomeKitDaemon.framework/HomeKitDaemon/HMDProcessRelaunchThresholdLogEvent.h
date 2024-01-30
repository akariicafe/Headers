@class NSUUID, NSNumber;

@interface HMDProcessRelaunchThresholdLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging>

@property (class, readonly) NSUUID *uuid;

@property (readonly, nonatomic) NSNumber *timeSincePreviousProcessLaunch;

- (id)eventName;
- (void).cxx_destruct;
- (id)serializedEvent;
- (id)initWithTimeSincePreviousLaunch:(id)a0;

@end
