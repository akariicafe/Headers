@class NSMutableDictionary, HDProfile, NSDate, HDPairedSyncManager, HDIDSMessageCenter, NSObject, HDNanoSyncStore, NSMutableArray, HDKeyValueDomain, NSString, HKNanoSyncPairedDevicesSnapshot, NSArray, HKObserverSet;
@protocol OS_dispatch_queue, OS_dispatch_source, _CDLocalContext;

@interface HDNanoSyncManager : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver, HDNanoSyncStoreDelegate, HDSyncSessionDelegate, HDDatabaseProtectedDataObserver, HDDataObserver, HDIDSMessageCenterDelegate, HDForegroundClientProcessObserver> {
    BOOL _isMaster;
    _Atomic BOOL _invalidated;
    id<_CDLocalContext> _context;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) HDIDSMessageCenter *messageCenter;
@property (retain, nonatomic) HKObserverSet *observers;
@property (retain, nonatomic) HDKeyValueDomain *nanoSyncDomain;
@property (retain, nonatomic) HDNanoSyncStore *activeSyncStore;
@property (retain, nonatomic) HDNanoSyncStore *activeTinkerSyncStore;
@property (nonatomic) int tinkerOptInAcceptedToken;
@property (nonatomic) int tinkerOptInDeclinedToken;
@property (retain, nonatomic) NSMutableArray *tinkerOptInResponseBlocks;
@property (retain, nonatomic) NSMutableDictionary *syncStoresByDeviceIdentifier;
@property (retain, nonatomic) NSArray *pairedDevices;
@property (retain) HKNanoSyncPairedDevicesSnapshot *pairedDevicesSnapshot;
@property (nonatomic) BOOL waitingForFirstUnlock;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *periodicSyncTimer;
@property (retain, nonatomic) NSDate *lastPeriodicSyncDate;
@property double restoreTimeout;
@property BOOL enablePeriodicSyncTimer;
@property (readonly, nonatomic) HDPairedSyncManager *pairedSyncManager;
@property (readonly) BOOL isMaster;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateAndWait;
- (void)_queue_updateDeviceNameIfNecessaryWithSyncStore:(id)a0;
- (void)_queue_requestAuthorizationForRequestRecord:(id)a0 syncStore:(id)a1 requestSentHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)_queue_handleRestoreResponse:(id)a0 syncStore:(id)a1;
- (void)_deviceDidBecomeActive:(id)a0;
- (void)nanoSyncStore:(id)a0 deviceNameDidChange:(id)a1;
- (id)_queue_syncStoreForNanoRegistryPairingID:(id)a0;
- (void)messageCenterDidReceiveRoutineRequest:(id)a0;
- (void)_queue_authorizationRequestDidFailToSendWithError:(id)a0 syncStore:(id)a1;
- (void)_queue_recieveStartWorkoutAppResponse:(id)a0 syncStore:(id)a1;
- (void)_queue_transitionToRestoreIncompleteWithSyncStore:(id)a0 error:(id)a1;
- (void)_queue_performSyncForTinkerEndToEndCloudSyncWithCompletion:(id /* block */)a0;
- (void)_queue_recieveStartWorkoutAppRequest:(id)a0 syncStore:(id)a1;
- (void)_addDaytonaVersionMessageHandlersToMessageCenter:(id)a0;
- (void).cxx_destruct;
- (void)syncSession:(id)a0 sendChanges:(id)a1 completion:(id /* block */)a2;
- (void)messageCenterDidReceiveTinkerOptInRequest:(id)a0;
- (void)unitTest_performWithActiveSyncStore:(id /* block */)a0;
- (void)requestAuthorizationForRequestRecord:(id)a0 requestSentHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (id)_queue_nanoSyncKeyValueDomain;
- (void)messageCenterDidReceiveAuthorizationRequest:(id)a0;
- (int)_changeResponseStatusCodeForAction:(long long)a0;
- (void)messageCenterDidReceiveTinkerOptInResponse:(id)a0;
- (void)_queue_recieveCompanionUserNotificationRequest:(id)a0 syncStore:(id)a1;
- (void)removeObserver:(id)a0;
- (void)_logIncomingRequest:(id)a0;
- (void)_queue_updateTinkerSyncStore;
- (void)_queue_tinkerOptInRequestDidFailToSendWithError:(id)a0 syncStore:(id)a1;
- (void)messageCenter:(id)a0 didResolveIDSIdentifierForRequest:(id)a1;
- (void)_queue_sendTinkerOptInRequest:(id)a0 syncStore:(id)a1 completion:(id /* block */)a2;
- (void)_registerForSyncTriggers;
- (id)_queue_eligibleInactiveSyncStores;
- (void)_userCharacteristicsDidChange:(id)a0;
- (void)messageCenterRestoreError:(id)a0;
- (void)_queue_transitionToRestoreCompleteWithSyncStore:(id)a0;
- (void)_queue_sendResponse:(id)a0 syncStore:(id)a1;
- (void)dealloc;
- (void)sendStartWorkoutAppRequest:(id)a0 completion:(id /* block */)a1;
- (void)messageCenterDidReceiveTinkerOptInError:(id)a0;
- (id)initWithProfile:(id)a0 isMaster:(BOOL)a1;
- (void)_queue_sendRequest:(id)a0 syncStore:(id)a1;
- (void)nanoSyncStore:(id)a0 remoteSystemBuildVersionDidChange:(id)a1;
- (void)_addHunterVersionMessageHandlersToMessageCenter:(id)a0;
- (long long)_queue_changeResponseActionForMessage:(id)a0 statusCode:(int)a1 syncStore:(id)a2 errorDescription:(id *)a3;
- (void)_queue_companionUserNotificationRequestDidFailToSendWithError:(id)a0 syncStore:(id)a1;
- (void)messageCenter:(id)a0 activeDeviceDidChange:(id)a1 acknowledgementHandler:(id /* block */)a2;
- (long long)_queue_changeRequestActionForMessage:(id)a0 syncStore:(id)a1 errorDescription:(id *)a2;
- (long long)_queue_actionForRestoreRequest:(id)a0 syncStore:(id)a1 error:(id *)a2;
- (void)_queue_recieveCompanionUserNotificationResponse:(id)a0 syncStore:(id)a1;
- (void)_didReceiveChangeRequest;
- (void)addObserver:(id)a0;
- (void)_queue_sendStartWorkoutAppRequest:(id)a0 syncStore:(id)a1 completion:(id /* block */)a2;
- (void)messageCenterDidReceiveChangesRequest:(id)a0;
- (void)messageCenterDidReceiveTinkerEndToEndCloudSyncRequest:(id)a0;
- (void)_deviceDidPair:(id)a0;
- (void)sendCompanionUserNotificationRequest:(id)a0 completion:(id /* block */)a1;
- (void)_queue_tinkerPairingRequestDidFailToSendWithError:(id)a0 syncStore:(id)a1;
- (void)messageCenterDidReceiveRestoreResponse:(id)a0;
- (void)messageCenterDidReceiveTinkerPairingRequest:(id)a0;
- (BOOL)_syncQueue_applyActivationRestore:(id)a0 request:(id)a1 syncStore:(id)a2 error:(id *)a3;
- (void)waitForLastChanceSyncWithDevicePairingID:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void)_queue_registerForTinkerOptInNotificationWithResponse:(id /* block */)a0;
- (void)syncSessionWillBegin:(id)a0;
- (void)_queue_performNextProactiveSyncWithRemainingDevices:(id)a0 accessibilityAssertion:(id)a1 completion:(id /* block */)a2;
- (void)_queue_receiveAuthorizationCompleteRequest:(id)a0 syncStore:(id)a1;
- (void)messageCenterDidReceiveRestoreRequest:(id)a0;
- (void)_syncQueue_forwardSpeculativeChangeSetIfNecessaryForChanges:(id)a0 destinationSyncStores:(id)a1 originSyncStore:(id)a2;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)updatePairedDevicesWithCompletion:(id /* block */)a0;
- (void)resetSyncWithCompletion:(id /* block */)a0;
- (void)_queue_cancelPeriodicSyncTimer;
- (void)_resetSyncAnchorsForStore:(id)a0;
- (void)daemonReady:(id)a0;
- (void)_queue_sendSpeculativeChangeSet:(id)a0 syncStore:(id)a1 completion:(id /* block */)a2;
- (void)messageCenterDidReceiveTinkerEndToEndCloudSyncResponse:(id)a0;
- (void)sendTinkerSharingOptInRequest:(id)a0 forNRDeviceUUID:(id)a1 completion:(id /* block */)a2;
- (void)_queue_waitForLastChanceSyncWithPairingID:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void)_queue_transitionToRestoreInProgressWithSyncStore:(id)a0;
- (void)_queue_receiveTinkerOptInRequest:(id)a0 syncStore:(id)a1;
- (void)initializeMessageCenterIfNeeded;
- (id)_queue_syncStoreForIDSDevice:(id)a0 updateIfNecessary:(BOOL)a1;
- (void)messageCenterDidReceiveTinkerPairingError:(id)a0;
- (void)_showFitnessAppIfNeeded;
- (void)_queue_sendTinkerPairingRequest:(id)a0 syncStore:(id)a1 completion:(id /* block */)a2;
- (void)_sendFinalMessageForSyncSession:(id)a0 status:(id)a1 success:(BOOL)a2 error:(id)a3;
- (void)_queue_periodicSyncTimerFired;
- (void)_handleIncomingResponse:(id)a0 usingBlock:(id /* block */)a1;
- (id)diagnosticDescription;
- (BOOL)_scheduleTransparencyAlert:(id *)a0;
- (void)sendTinkerEndToEndCloudSyncRequestForNRDeviceUUID:(id)a0 completion:(id /* block */)a1;
- (void)messageCenterDidReceiveStartWorkoutAppError:(id)a0;
- (void)messageCenterChangesError:(id)a0;
- (id)_syncQueue_responseForChangesRequest:(id)a0 syncStore:(id)a1 statusCode:(int)a2;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)messageCenterDidReceiveStartWorkoutAppRequest:(id)a0;
- (void)syncHealthDataWithOptions:(unsigned long long)a0 reason:(id)a1 accessibilityAssertion:(id)a2 completion:(id /* block */)a3;
- (void)messageCenterDidReceiveCompanionUserNotificationResponse:(id)a0;
- (void)_queue_changeResponseDidFailToSendWithError:(id)a0 syncStore:(id)a1;
- (void)_queue_receiveAuthorizationResponse:(id)a0 syncStore:(id)a1;
- (void)_queue_receiveChangeRequest:(id)a0 syncStore:(id)a1 completion:(id /* block */)a2;
- (void)_logOutgoingMessageError:(id)a0;
- (void)_queue_receiveRoutineRequest:(id)a0 syncStore:(id)a1;
- (void)messageCenterDidReceiveTinkerPairingResponse:(id)a0;
- (void)_queue_receiveTinkerPairingRequest:(id)a0 syncStore:(id)a1;
- (void)_queue_startWorkoutAppRequestDidFailToSendWithError:(id)a0 syncStore:(id)a1;
- (void)_queue_receiveTinkerEndToEndCloudSyncRequest:(id)a0 syncStore:(id)a1;
- (id)_queue_validatedSyncStore:(id)a0 device:(id)a1 message:(id)a2 error:(id *)a3;
- (void)_syncronouslyHandleIncomingRequest:(id)a0 usingBlock:(id /* block */)a1;
- (void)_queue_sendRestoreMessageWithStore:(id)a0 restoreUUID:(id)a1 sequenceNumber:(long long)a2 statusCode:(int)a3;
- (void)_invalidate;
- (void)messageCenterDidReceiveCompanionUserNotificationRequest:(id)a0;
- (void)syncHealthDataWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_handleIncomingRequest:(id)a0 usingBlock:(id /* block */)a1;
- (void)messageCenterDidReceiveAuthorizationError:(id)a0;
- (void)_queue_sendCompanionUserNotificationRequest:(id)a0 syncStore:(id)a1 completion:(id /* block */)a2;
- (void)_queue_updateSyncStoresWithCompletion:(id /* block */)a0;
- (void)_scheduleResetReceivedNanoSyncAnchorsForHFD;
- (void)sendTinkerWatchPairingRequest:(id)a0 forNRDeviceUUID:(id)a1 completion:(id /* block */)a2;
- (void)messageCenter:(id)a0 didResolveIDSIdentifierForResponse:(id)a1;
- (void)_queue_receiveChangeResponse:(id)a0 syncStore:(id)a1;
- (BOOL)_queue_permitSyncWithError:(id *)a0;
- (void)_notifyObserversPairedDevicesChanged:(id)a0;
- (void)_queue_synchronizeWithOptions:(unsigned long long)a0 restoreMessagesSentHandler:(id /* block */)a1 targetSyncStore:(id)a2 reason:(id)a3 accessibilityAssertion:(id)a4 completion:(id /* block */)a5;
- (void)_handleOutgoingMessageError:(id)a0 usingBlock:(id /* block */)a1;
- (void)_queue_tinkerEndToEndCloudSyncRequestDidFailToSendWithError:(id)a0 syncStore:(id)a1;
- (void)_syncImmediatelyWithReason:(id)a0;
- (void)_queue_setUpMessageCentersIfNecessary;
- (void)_deviceDidUnpair:(id)a0;
- (void)_queue_syncImmediatelyWithReason:(id)a0 options:(unsigned long long)a1 accessibilityAssertion:(id)a2 completion:(id /* block */)a3;
- (void)messageCenterDidReceiveTinkerEndToEndCloudSyncError:(id)a0;
- (void)_queue_receiveTinkerOptInResponse:(id)a0 syncStore:(id)a1;
- (BOOL)_saveGuardianDetailsWithUserInfo:(id)a0 guardianParticipant:(id)a1 error:(id *)a2;
- (void)_queue_beginRestoreWithStore:(id)a0 completion:(id /* block */)a1;
- (void)_userPreferencesDidChange:(id)a0;
- (void)obliterateWithOptions:(unsigned long long)a0 reason:(id)a1;
- (void)_queue_pairedSyncDidBeginForDevice:(id)a0 messagesSentHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)_queue_beginProactiveSyncWithAssertion:(id)a0 completion:(id /* block */)a1;
- (void)_queue_startPeriodicSyncTimerIfNecessary;
- (void)_queue_receiveTinkerPairingResponse:(id)a0 syncStore:(id)a1;
- (void)_queue_changeRequestDidFailToSendWithError:(id)a0 syncStore:(id)a1;
- (void)_queue_receiveTinkerEndToEndCloudSyncResponse:(id)a0 syncStore:(id)a1;
- (void)messageCenterDidReceiveCompanionUserNotificationError:(id)a0;
- (void)_workoutSamplesWereAssociated:(id)a0;
- (void)restoreTimedOutWithSyncStore:(id)a0;
- (void)_unregisterForSyncTriggers;
- (void)_queue_handleRestoreRequest:(id)a0 syncStore:(id)a1;
- (void)_queue_updateSyncStores;
- (void)_queue_sendTinkerEndToEndCloudSyncRequestWithSyncStore:(id)a0 completion:(id /* block */)a1;
- (void)messageCenterDidReceiveAuthorizationResponse:(id)a0;
- (void)pairedSyncDidBeginForDevice:(id)a0 messagesSentHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)_queue_receiveAuthorizationRequest:(id)a0 syncStore:(id)a1;
- (void)_logIncomingResponse:(id)a0;
- (void)syncHealthDataWithOptions:(unsigned long long)a0 reason:(id)a1 completion:(id /* block */)a2;
- (void)syncSession:(id)a0 didFinishSuccessfully:(BOOL)a1 error:(id)a2;
- (void)messageCenterDidReceiveAuthorizationCompleteRequest:(id)a0;
- (void)_syncImmediatelyWithReason:(id)a0 options:(unsigned long long)a1;
- (BOOL)_queue_finishInitializationAfterFirstUnlockIfNecessaryWithError:(id *)a0;
- (BOOL)_syncQueue_prepareForCompanionChangeWithStore:(id)a0 error:(id *)a1;
- (void)foregroundClientProcessesDidChange:(id)a0 previouslyForegroundBundleIdentifiers:(id)a1;
- (void)_queue_resetSyncWithCompletion:(id /* block */)a0;
- (id)_queue_syncStoreForMessageCenterError:(id)a0;
- (void)_queue_generateWatchActivationSamples;
- (BOOL)_queue_isRestoreCompleteForSyncStore:(id)a0 error:(id *)a1;
- (void)_queue_sendChangeSet:(id)a0 status:(id)a1 session:(id)a2 completion:(id /* block */)a3;
- (void)messageCenterDidReceiveChangesResponse:(id)a0;
- (void)_queue_handleTinkerOptInNotification:(BOOL)a0;
- (void)nanoSyncStore:(id)a0 restoreStateDidChange:(long long)a1;
- (void)_watchOffWristNotification:(id)a0;
- (void)_sendFinalStatusMessageForSyncSession:(id)a0 didFinishSuccessfully:(BOOL)a1 error:(id)a2;
- (void)messageCenterDidReceiveStartWorkoutAppResponse:(id)a0;

@end
