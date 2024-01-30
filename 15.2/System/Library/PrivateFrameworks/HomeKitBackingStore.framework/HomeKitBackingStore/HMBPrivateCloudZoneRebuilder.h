@class NSUUID, HMFUnfairLock, HMFTimer, NSString, CKRecord, HMBCloudZone, HMBCloudZoneRebuilderStatus, NAFuture;

@interface HMBPrivateCloudZoneRebuilder : HMFObject <HMFTimerDelegate, HMFLogging, HMBCloudZoneRebuilder>

@property (readonly, nonatomic) HMFUnfairLock *propertyLock;
@property (retain, nonatomic) CKRecord *previousSentinelRebuildRecord;
@property (retain, nonatomic) NSUUID *lastRebuildUUID;
@property (retain, nonatomic) HMFTimer *uploadMonitorWatchdogTimer;
@property (weak, nonatomic) HMBCloudZone *cloudZone;
@property (retain, nonatomic) NAFuture *rebuildCompleteFuture;
@property (copy) HMBCloudZoneRebuilderStatus *rebuilderStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isZoneRebuildInProgress) BOOL zoneRebuildInProgress;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)initWithCloudZone:(id)a0;
- (id)logIdentifier;
- (id)zoneStartUp;
- (void)handleZoneChanged;
- (void).cxx_destruct;
- (void)handleIdentityLost;
- (void)rebuild;

@end
