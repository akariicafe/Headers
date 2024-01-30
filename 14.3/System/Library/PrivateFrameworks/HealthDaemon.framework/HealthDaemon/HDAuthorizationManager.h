@class _HDAuthorizationRequestGroup, NSMutableDictionary, HDProfile, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HDAuthorizationManager : NSObject <HDDiagnosticObject> {
    NSMutableDictionary *_openAppCompletionHandlersByBundleID;
    NSMutableDictionary *_remoteAuthorizationRecordsByBundleID;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) NSMutableDictionary *requestGroupsByBundleIdentifier;
@property (retain, nonatomic) NSMutableArray *pendingRequestGroups;
@property (retain, nonatomic) _HDAuthorizationRequestGroup *promptingRequestGroup;
@property (retain, nonatomic) NSMutableDictionary *pendingObjectAuthorizationRequestsByBundleIdentifier;
@property (retain, nonatomic) NSMutableDictionary *activeObjectPromptSessionsBySessionIdentifier;
@property (nonatomic) BOOL suppressAuthorizationPrompt;
@property (nonatomic) double requestSessionTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)requestRemoteAuthorizationForRequestRecord:(id)a0 requestSentHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)_performNanoSyncImmediatelyWithReason:(id)a0;
- (void)_queue_resetAllAuthorizationRecordsWithCompletion:(id /* block */)a0;
- (long long)authorizationRequestStatusForClientBundleIdentifier:(id)a0 writeTypes:(id)a1 readTypes:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (void)resetAllAuthorizationRecordsWithCompletion:(id /* block */)a0;
- (void)setAuthorizationStatuses:(id)a0 authorizationModes:(id)a1 forBundleIdentifier:(id)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)openAppForAuthorization:(id)a0 sessionIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (id)enqueueAuthorizationRequestForBundleIdentifier:(id)a0 writeTypes:(id)a1 readTypes:(id)a2 authorizationNeededHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)_queue_cancelAuthorizationRequestsWithIdentifiers:(id)a0;
- (BOOL)verifyProfileAuthorizationForClient:(id)a0 error:(id *)a1;
- (void)_queue_enqueueAuthorizationRequestWithIdentifier:(id)a0 bundleIdentifier:(id)a1 writeTypes:(id)a2 readTypes:(id)a3 authorizationNeededHandler:(id /* block */)a4 completion:(id /* block */)a5;
- (void)_updateSourceOrderWithAuthorizationStatuses:(id)a0 forBundleIdentifier:(id)a1;
- (id)enqueueObjectAuthorizationRequestForBundleIdentifier:(id)a0 samples:(id)a1 promptIfNeeded:(BOOL)a2 authorizationNeededHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)handleAuthorizationRequestsForBundleIdentifier:(id)a0 promptHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (id)diagnosticDescription;
- (void)_queue_handleNextAuthorizationRequestGroup;
- (id)_validateRequiredAuthorizationWithRequestGroup:(id)a0;
- (long long)_authorizationRequestStatusForClientBundleIdentifier:(id)a0 writeTypes:(id)a1 readTypes:(id)a2 updateAuthorizationStatuses:(BOOL)a3 error:(id *)a4;
- (void)_queue_endAuthorizationDelegateTransactionWithSessionIdentifier:(id)a0 error:(id)a1;
- (id)_queue_activePromptSessionForBundleIdentifier:(id)a0;
- (BOOL)hasRequiredAuthorizationStatusesForBundleIdentifier:(id)a0 requiredReadTypes:(id)a1 error:(id *)a2;
- (void)applicationsUninstalledNotification:(id)a0;
- (void)handleObjectAuthorizationRequestsForBundleIdentifier:(id)a0 promptHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)cancelAuthorizationRequestsWithIdentifiers:(id)a0;
- (void)_queue_requestGroupDidFinishPrompting:(id)a0 error:(id)a1;
- (void)_queue_setAuthorizationStatuses:(id)a0 authorizationModes:(id)a1 forBundleIdentifier:(id)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)_reportAuthorizationChangeForBundleIdentifier:(id)a0;
- (void)endAuthorizationDelegateTransactionWithSessionIdentifier:(id)a0 error:(id)a1;
- (BOOL)_queue_resetAuthorizationRecordsForBundleIdentifier:(id)a0 error:(id *)a1;
- (void)_queue_beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)a0 completion:(id /* block */)a1;

@end
