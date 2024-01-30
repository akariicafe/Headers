@class NSUUID, NSString;

@interface HMDBackingStoreCKRebuildEvent : HMDHMBLogEvent <HMDAWDLogEvent>

@property (class, readonly, copy) NSUUID *uuid;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) int rebuildStatus;

- (unsigned int)AWDMessageType;
- (id)metricForAWD;
- (id)initWithCloudZoneID:(id)a0 rebuildStatus:(id)a1;

@end
