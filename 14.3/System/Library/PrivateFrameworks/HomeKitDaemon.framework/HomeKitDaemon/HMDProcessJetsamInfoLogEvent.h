@class NSUUID, NSString;

@interface HMDProcessJetsamInfoLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging>

@property (class, readonly, copy) NSUUID *uuid;

@property (readonly, copy, nonatomic) NSString *jetsamReason;

- (id)eventName;
- (void).cxx_destruct;
- (id)serializedEvent;
- (id)initWithJetsamReason:(id)a0;

@end
