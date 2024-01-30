@class HMFPreferences, NSString;
@protocol HMDFeaturesDataSource, HMMLogEventSubmitting;

@interface HMDCameraRecordingManagerDependencyFactory : HMFObject <HMDCameraRecordingManagerDependencyFactory>

@property (readonly) id<HMDFeaturesDataSource> featuresDataSource;
@property (readonly) HMFPreferences *preferences;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createBulkSendSessionInitiatorWithWorkQueue:(id)a0 accessory:(id)a1;
- (id)createBulkSendSessionReaderWithWorkQueue:(id)a0 session:(id)a1 readTimeout:(double)a2 logIdentifier:(id)a3;
- (id)createLoadBalancingAttemptWithLocalResponseTimeout:(double)a0 logIdentifier:(id)a1;
- (id)createRecordingSessionRetryContextWithWorkQueue:(id)a0 homePresenceByPairingIdentity:(id)a1;
- (id)createRecordingSessionWithWorkQueue:(id)a0 camera:(id)a1 hapAccessory:(id)a2 home:(id)a3 localZone:(id)a4 configuredFragmentDuration:(double)a5 timelineManager:(id)a6 significantEventServer:(id)a7 homePresenceByPairingIdentity:(id)a8;
- (id)createSessionNotificationTrigger:(id)a0 workQueue:(id)a1;
- (id)createSettingsControl:(id)a0 accessory:(id)a1 managementService:(id)a2;
- (id)createSignificantEventServerWithWorkQueue:(id)a0 camera:(id)a1;
- (id)createTimelineManagerWithWorkQueue:(id)a0 fragmentDuration:(double)a1 fragmentCreationReferenceDate:(id)a2 logIdentifier:(id)a3;
- (id)createTimerWithTimeInterval:(double)a0;

@end
