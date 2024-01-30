@class HMCameraClipEncryptionManager, NSDate;

@interface HMDCameraClipCreateClipOperation : HMDCameraClipAddSignificantEventOperation

@property (readonly) double targetFragmentDuration;
@property (readonly, copy) NSDate *clipStartDate;
@property (readonly) HMCameraClipEncryptionManager *encryptionManager;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)modelsToUpdate;
- (id)initWithClipModelID:(id)a0 localZone:(id)a1 significantEvent:(id)a2 homePresenceByPairingIdentity:(id)a3 targetFragmentDuration:(double)a4 clipStartDate:(id)a5 encryptionManager:(id)a6;
- (id)initWithClipModelID:(id)a0 localZone:(id)a1 significantEvent:(id)a2 homePresenceByPairingIdentity:(id)a3 targetFragmentDuration:(double)a4 clipStartDate:(id)a5 encryptionManager:(id)a6 dataSource:(id)a7;

@end
