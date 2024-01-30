@class NSUUID;

@interface HMDStereoPairDailyCountLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging>

@property (class, readonly, copy) NSUUID *uuid;

@property (readonly) unsigned long long smallHomePodPairCount;

- (id)eventName;
- (id)serializedEvent;
- (id)initWithSmallHomePodCount:(unsigned long long)a0;

@end
