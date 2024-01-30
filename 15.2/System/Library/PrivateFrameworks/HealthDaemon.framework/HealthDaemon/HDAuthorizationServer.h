@class NSMutableArray, NSString, HDProfile, NSUUID, NSObject, HDHealthStoreClient;
@protocol OS_dispatch_queue;

@interface HDAuthorizationServer : NSObject {
    _Atomic BOOL _invalidated;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDHealthStoreClient *_client;
    NSMutableArray *_authorizationRequestIdentifiers;
    NSUUID *_transactionSessionIdentifier;
}

@property (readonly, copy) NSString *sourceBundleIdentifier;

- (id)authorizationStatusForType:(id)a0 error:(id *)a1;
- (id)initWithClient:(id)a0 queue:(id)a1;
- (void)performIfAuthorizedToSaveObjectsWithTypes:(id)a0 onQueue:(id)a1 usingBlock:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (BOOL)isAuthorizationStatusDeterminedForTypes:(id)a0 error:(id *)a1;
- (id)readAuthorizationWithTypes:(id)a0 error:(id *)a1;
- (void)handleAuthorizationRequestsForBundleIdentifier:(id)a0 promptHandler:(id /* block */)a1 requestCompletionHandler:(id /* block */)a2;
- (id)readAuthorizationStatusForType:(id)a0 error:(id *)a1;
- (void)handleAuthorizationRequestsWithPromptHandler:(id /* block */)a0 requestCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)endAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)a0 error:(id)a1;
- (void)updateDefaultAuthorizationStatusesWithCompletion:(id /* block */)a0;
- (void)createRecalibrateEstimatesRequestRecordForSampleType:(id)a0 effectiveDate:(id)a1 handler:(id /* block */)a2;
- (void)enqueueAuthorizationRequestToWriteTypes:(id)a0 readTypes:(id)a1 authorizationNeededHandler:(id /* block */)a2 requestCompletionHandler:(id /* block */)a3;
- (void)enqueueObjectAuthorizationRequestWithContext:(id)a0 promptIfNeeded:(BOOL)a1 authorizationNeededHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)invalidate;
- (void)performIfAuthorizedToDeleteObjectsWithTypes:(id)a0 onQueue:(id)a1 usingBlock:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (void)performIfAuthorizedToReadTypes:(id)a0 onQueue:(id)a1 usingBlock:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (void)beginAuthorizationRequestDelegateTransactionWithRequestRecord:(id)a0 completion:(id /* block */)a1;
- (void)handleObjectAuthorizationRequestsWithPromptHandler:(id /* block */)a0 completion:(id /* block */)a1;
- (void)beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)a0 completion:(id /* block */)a1;

@end
