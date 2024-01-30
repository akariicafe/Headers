@class HDSecondaryDevicePairingRequest, NSObject;
@protocol OS_dispatch_source;

@interface HDSecondaryDevicePairingAgentTaskServer : HDStandardTaskServer <HKSecondaryDevicePairingAgentServerInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_source> *_timeoutSource;
    BOOL _taskDidTimeout;
    HDSecondaryDevicePairingRequest *_currentRequest;
}

@property (nonatomic) double tinkerSharingSetupTimeout;
@property (copy, nonatomic) id /* block */ unitTest_timeoutTriggered;

+ (id)taskIdentifier;

- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)remote_requestTinkerSharingOptInWithGuardianDisplayName:(id)a0 NRDeviceUUID:(id)a1 completion:(id /* block */)a2;
- (void)remote_setupHealthSharingForSecondaryPairedDeviceWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)remote_performEndToEndCloudSyncWithNRDeviceUUID:(id)a0 syncParticipantFirst:(BOOL)a1 completion:(id /* block */)a2;
- (void)remote_tearDownHealthSharingWithPairedGuardianWithCompletion:(id /* block */)a0;
- (void)remote_tearDownHealthSharingWithTinkerDeviceWithNRUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchSharingStatusWithPairedGuardianWithCompletion:(id /* block */)a0;
- (void)remote_fetchSharingStatusForCurrentAppleIDWithOwnerEmailAddress:(id)a0 completion:(id /* block */)a1;
- (id)remoteInterface;
- (void)connectionInterrupted;
- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_finishWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_cancelTaskTimeout;
- (void)_scheduleTaskTimeout:(double)a0 timeoutHandler:(id /* block */)a1;
- (void)_prepareGuardianForSharingForRequest:(id)a0;
- (void)removePrivacyAlerts;
- (void)_presentFailedTeardownAlert;
- (void)_didTimeOutWithHandler:(id /* block */)a0;
- (void)_sendSharingRequestToTinkerDevice:(id)a0;
- (void)_acceptSharingForRequest:(id)a0 metadata:(id)a1;
- (id)_lookupOrCreateTinkerProfileForRequest:(id)a0 metadata:(id)a1 acceptedShares:(id)a2 error:(id *)a3;
- (void)_setupTinkerProfileForRequest:(id)a0 metadata:(id)a1 acceptedShares:(id)a2;
- (BOOL)_updateProfile:(id)a0 withDateOfBirth:(id)a1 firstName:(id)a2 lastName:(id)a3 dsid:(id)a4 error:(id *)a5;
- (id)_existingTinkerProfileForRequest:(id)a0 metadata:(id)a1 acceptedShares:(id)a2 error:(id *)a3;

@end
