@class NSUUID;

@interface HMDRemoteDeviceReachabilityChangeLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging>

@property (class, readonly) NSUUID *uuid;

@property (readonly) unsigned long long reason;
@property (readonly) BOOL reachable;
@property (readonly) BOOL targetSupportsIDSPresence;

- (id)eventName;
- (id)serializedEvent;
- (id)initWithReason:(unsigned long long)a0 reachable:(BOOL)a1 targetSupportsIDSPresence:(BOOL)a2;

@end
