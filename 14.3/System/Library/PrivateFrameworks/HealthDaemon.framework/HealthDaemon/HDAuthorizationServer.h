@class NSMutableArray, NSUUID, HDProfile, NSString, NSObject, HDHealthStoreClient;
@protocol OS_dispatch_queue;

@interface HDAuthorizationServer : NSObject {
    _Atomic BOOL _invalidated;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) HDHealthStoreClient *client;
@property (retain, nonatomic) NSMutableArray *authorizationRequestIdentifiers;
@property (retain, nonatomic) NSUUID *transactionSessionIdentifier;
@property (readonly, copy) NSString *sourceBundleIdentifier;

- (void)handleAuthorizationRequestsForBundleIdentifier:(id)a0 promptHandler:(id /* block */)a1 requestCompletionHandler:(id /* block */)a2;
- (void)endAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)a0 error:(id)a1;
- (id)readAuthorizationStatusForType:(id)a0 error:(id *)a1;
- (id)initWithClient:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (BOOL)isAuthorizationStatusDeterminedForTypes:(id)a0 error:(id *)a1;
- (void)handleAuthorizationRequestsWithPromptHandler:(id /* block */)a0 requestCompletionHandler:(id /* block */)a1;
- (void)enqueueObjectAuthorizationRequestForSamples:(id)a0 promptIfNeeded:(BOOL)a1 authorizationNeededHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)performIfAuthorizedToReadTypes:(id)a0 onQueue:(id)a1 usingBlock:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (id)authorizationStatusForType:(id)a0 error:(id *)a1;
- (void)beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_authorizationStatusForTypes:(id)a0 error:(id *)a1;
- (void)performIfAuthorizedToSaveObjectsWithTypes:(id)a0 onQueue:(id)a1 usingBlock:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (void)_performIfAuthorizedForTypes:(id)a0 sharing:(BOOL)a1 onQueue:(id)a2 usingBlock:(id /* block */)a3 errorHandler:(id /* block */)a4;
- (void)enqueueAuthorizationRequestToWriteTypes:(id)a0 readTypes:(id)a1 authorizationNeededHandler:(id /* block */)a2 requestCompletionHandler:(id /* block */)a3;
- (void)updateDefaultAuthorizationStatusesWithCompletion:(id /* block */)a0;
- (void)beginAuthorizationRequestDelegateTransactionWithRequestRecord:(id)a0 completion:(id /* block */)a1;
- (void)_queue_beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_invalidate;
- (id)readAuthorizationWithTypes:(id)a0 error:(id *)a1;
- (void)_queue_enqueueAuthorizationRequestForBundleIdentifier:(id)a0 writeTypes:(id)a1 readTypes:(id)a2 authorizationNeededHandler:(id /* block */)a3 requestCompletionHandler:(id /* block */)a4;
- (void)performIfAuthorizedToDeleteObjectsWithTypes:(id)a0 onQueue:(id)a1 usingBlock:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (void)handleObjectAuthorizationRequestsWithPromptHandler:(id /* block */)a0 completion:(id /* block */)a1;
- (void)invalidate;

@end
