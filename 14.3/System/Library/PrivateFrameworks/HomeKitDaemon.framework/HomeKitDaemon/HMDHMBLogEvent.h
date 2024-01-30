@interface HMDHMBLogEvent : HMDLogEvent

@property (readonly) int containerType;
@property (readonly) int zoneType;

- (id)initWithEventType:(id)a0 cloudZoneID:(id)a1;

@end
