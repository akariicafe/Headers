@class NSUUID;

@interface HMDUserDataZoneControllerShareLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging>

@property (class, readonly, copy) NSUUID *uuid;

@property (readonly) unsigned long long result;
@property (readonly) BOOL didAccept;

- (id)eventName;
- (id)serializedEvent;
- (id)initWithResult:(unsigned long long)a0 didAccept:(BOOL)a1;

@end
