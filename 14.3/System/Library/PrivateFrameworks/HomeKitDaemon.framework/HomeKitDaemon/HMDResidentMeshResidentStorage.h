@class HMDResidentMesh, NSString, HMFTimer, NSSet, NSMutableDictionary, NSDictionary, HMDDevice, NSMutableSet;

@interface HMDResidentMeshResidentStorage : HMFObject <HMFTimerDelegate>

@property (weak, nonatomic) HMDResidentMesh *owner;
@property (weak, nonatomic) HMDDevice *resident;
@property (retain, nonatomic) NSMutableSet *accessoryUUIDs;
@property (retain, nonatomic) NSSet *lastSentAccessoryUUIDs;
@property (retain, nonatomic) NSMutableDictionary *metrics;
@property (retain, nonatomic) NSDictionary *lastSentMetrics;
@property (retain, nonatomic) HMFTimer *transmitTimer;
@property (retain, nonatomic) NSMutableDictionary *accessoryListWithLinkQuality;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (void)_transmitStatus:(BOOL)a0;
- (BOOL)_addAccessoryWithLinkQuality:(id)a0 toList:(id)a1 completion:(id /* block */)a2;
- (void)_transmitAfter:(double)a0;
- (BOOL)_residentDidChange;
- (id)_buildPayload;
- (id)initWithResident:(id)a0 owner:(id)a1;
- (void)_addAccessory:(id)a0 activateTimer:(BOOL)a1;
- (void)_removeAccessory:(id)a0 activateTimer:(BOOL)a1;

@end
