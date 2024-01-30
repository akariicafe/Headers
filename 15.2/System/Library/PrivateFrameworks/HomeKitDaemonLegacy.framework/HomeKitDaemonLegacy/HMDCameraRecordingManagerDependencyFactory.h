@class HMFPreferences;

@interface HMDCameraRecordingManagerDependencyFactory : HMFObject

@property (readonly) HMFPreferences *preferences;

- (id)createRecordingSessionRetryContextWithWorkQueue:(id)a0 homePresenceByPairingIdentity:(id)a1;
- (id)createTimerWithTimeInterval:(double)a0;
- (id)createRecordingSessionWithWorkQueue:(id)a0 camera:(id)a1 configuredFragmentDuration:(double)a2 timelineManager:(id)a3 significantEventServer:(id)a4 homePresenceByPairingIdentity:(id)a5;
- (id)createSignificantEventServerWithWorkQueue:(id)a0 camera:(id)a1;
- (id)createFeaturesDataSource;
- (id)createBulkSendSessionInitiatorWithWorkQueue:(id)a0 accessory:(id)a1;
- (id)createSettingsControl:(id)a0 accessory:(id)a1 managementService:(id)a2;
- (id)createSessionNotificationTrigger:(id)a0 workQueue:(id)a1;

@end
