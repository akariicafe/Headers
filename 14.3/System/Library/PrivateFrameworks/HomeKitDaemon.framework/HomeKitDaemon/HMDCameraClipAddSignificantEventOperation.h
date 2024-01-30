@class HMDCameraRecordingSessionSignificantEvent, NSDictionary, NSString;

@interface HMDCameraClipAddSignificantEventOperation : HMDCameraClipOperation <HMBLocalZoneMirrorOutputObserver>

@property (readonly, copy) HMDCameraRecordingSessionSignificantEvent *significantEvent;
@property (readonly) NSDictionary *homePresenceByPairingIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)main;
- (id)attributeDescriptions;
- (void)localZone:(id)a0 willPerformMirrorOutputForModel:(id)a1;
- (id)modelsToUpdate;
- (id)initWithClipModelID:(id)a0 localZone:(id)a1 significantEvent:(id)a2 homePresenceByPairingIdentity:(id)a3 dataSource:(id)a4;
- (id)initWithClipModelID:(id)a0 localZone:(id)a1 significantEvent:(id)a2 homePresenceByPairingIdentity:(id)a3;

@end
