@class NSUUID, NSString;

@interface HMDMessageHandlerFailureMetricEvent : HMDLogEvent <HMDCoreAnalyticsLogging>

@property (class, readonly, copy) NSUUID *identifier;

@property (readonly, copy) NSString *messageName;
@property (readonly, copy) NSString *type;

- (id)eventName;
- (void).cxx_destruct;
- (id)serializedEvent;
- (id)initWithFailureType:(unsigned long long)a0 messageName:(id)a1;

@end
