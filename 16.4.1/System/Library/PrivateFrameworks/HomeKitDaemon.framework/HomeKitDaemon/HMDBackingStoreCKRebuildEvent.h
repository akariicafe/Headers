@class NSString;

@interface HMDBackingStoreCKRebuildEvent : HMDHMBLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) int rebuildStatus;

- (unsigned int)AWDMessageType;
- (id)initWithCloudZoneID:(id)a0 rebuildStatus:(id)a1;
- (id)metricForAWD;

@end
