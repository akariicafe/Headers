@interface HMDHMBLogEvent : HMMLogEvent

@property (readonly) int containerType;
@property (readonly) int zoneType;

- (id)initWithCloudZoneID:(id)a0;

@end
