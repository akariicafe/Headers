@class _HDAuthorizationRequestGroup, NSString, NSMutableDictionary, HDProfile, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HDAuthorizationManager : NSObject <HDDiagnosticObject> {
    NSMutableDictionary *_openAppCompletionHandlersByBundleID;
    NSMutableDictionary *_remoteAuthorizationRecordsByBundleID;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSMutableDictionary *_requestGroupsByBundleIdentifier;
    NSMutableArray *_pendingRequestGroups;
    _HDAuthorizationRequestGroup *_promptingRequestGroup;
    NSMutableDictionary *_pendingObjectAuthorizationRequestsByBundleIdentifier;
    NSMutableDictionary *_activeObjectPromptSessionsBySessionIdentifier;
    NSMutableDictionary *_activeRecalibrateEstimatesRequestSessionsByBundleIdentifier;
}

@property (nonatomic) BOOL suppressAuthorizationPrompt;
@property (nonatomic) double requestSessionTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)resetAllAuthorizationRecordsWithCompletion:(id /* block */)a0;
- (BOOL)verifyProfileAuthorizationForClient:(id)a0 error:(id *)a1;
- (id)diagnosticDescription;
- (void)validateRecalibrateEstimatesRequestRecord:(id)a0 completion:(id /* block */)a1;
- (void)requestRemoteAuthorizationForRequestRecord:(id)a0 requestSentHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)handleObjectAuthorizationRequestsForBundleIdentifier:(id)a0 promptHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (id)enqueueAuthorizationRequestForBundleIdentifier:(id)a0 writeTypes:(id)a1 readTypes:(id)a2 authorizationNeededHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)applicationsUninstalledNotification:(id)a0;
- (void)setAuthorizationStatuses:(id)a0 authorizationModes:(id)a1 forBundleIdentifier:(id)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)dealloc;
- (void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)fetchAuthorizationContextForPromptSession:(id)a0 error:(id *)a1;
- (void)openAppForAuthorization:(id)a0 sessionIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)handleAuthorizationRequestsForBundleIdentifier:(id)a0 promptHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)cancelAuthorizationRequestsWithIdentifiers:(id)a0;
- (BOOL)hasRequiredAuthorizationStatusesForBundleIdentifier:(id)a0 requiredReadTypes:(id)a1 error:(id *)a2;
- (void)performObjectAuthorizationForSource:(id)a0 samples:(id)a1 associatedWithSamplesOfType:(id)a2 completion:(id /* block */)a3;
- (void)createRecalibrateEstimatesRequestRecordForSource:(id)a0 sampleType:(id)a1 effectiveDate:(id)a2 handler:(id /* block */)a3;
- (void).cxx_destruct;
- (long long)objectAuthorizationRecordForSource:(id)a0 objectUUID:(id)a1 resolveAssociations:(BOOL)a2 error:(id *)a3;
- (void)endAuthorizationDelegateTransactionWithSessionIdentifier:(id)a0 error:(id)a1;
- (id)enqueueObjectAuthorizationRequestForBundleIdentifier:(id)a0 context:(id)a1 promptIfNeeded:(BOOL)a2 authorizationNeededHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (long long)authorizationRequestStatusForClientBundleIdentifier:(id)a0 writeTypes:(id)a1 readTypes:(id)a2 error:(id *)a3;

@end
