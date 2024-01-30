@class NSUUID, NSString, NSNumber;

@interface HMDAggregateRemoteMessageCountersLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging>

@property (class, readonly, copy) NSUUID *identifier;

@property (readonly, copy, nonatomic) NSString *transportType;
@property (readonly, copy, nonatomic) NSString *direction;
@property (readonly, copy, nonatomic) NSString *deviceType;
@property (readonly, copy, nonatomic) NSString *messageName;
@property (readonly, copy, nonatomic) NSNumber *count;

+ (id)aggregateRemoteCountersLogEventWithMessageName:(id)a0 deviceType:(id)a1 transportType:(id)a2 direction:(id)a3 count:(id)a4;

- (id)eventName;
- (id)init;
- (void).cxx_destruct;
- (id)serializedEvent;
- (BOOL)shouldSubmitEvent;
- (id)__initWithMessageName:(id)a0 deviceType:(id)a1 transportType:(id)a2 direction:(id)a3 count:(id)a4;

@end
