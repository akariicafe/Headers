@class NAFuture, HMBCloudZoneRebuilderStatus, NSString, HMBCloudZone;

@interface HMBSharedCloudZoneRebuilder : HMFObject <HMFLogging, HMBCloudZoneRebuilder>

@property (weak, nonatomic) HMBCloudZone *cloudZone;
@property (retain, nonatomic) NAFuture *rebuildCompleteFuture;
@property (copy) HMBCloudZoneRebuilderStatus *rebuilderStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isZoneRebuildInProgress) BOOL zoneRebuildInProgress;

+ (id)logCategory;

- (id)initWithCloudZone:(id)a0;
- (id)logIdentifier;
- (id)zoneStartUp;
- (void)handleZoneChanged;
- (void).cxx_destruct;
- (void)handleIdentityLost;
- (void)rebuild;

@end
