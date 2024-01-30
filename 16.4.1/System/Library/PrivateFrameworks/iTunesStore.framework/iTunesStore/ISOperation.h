@class NSLock, NSString, NSArray, NSRunLoop, NSError, SSOperationProgress, NSMutableArray;
@protocol ISOperationDelegate;

@interface ISOperation : NSOperation {
    id<ISOperationDelegate> _delegate;
    NSLock *_lock;
    SSOperationProgress *_progress;
    BOOL _shouldMessageMainThread;
    NSArray *_serializationLockIdentifiers;
    NSMutableArray *_subOperations;
    BOOL _stopped;
}

@property (retain) ISOperation *parentOperation;
@property (readonly, nonatomic) SSOperationProgress *progress;
@property (retain) NSRunLoop *operationRunLoop;
@property (copy) NSArray *serializationLockIdentifiers;
@property (weak) id<ISOperationDelegate> delegate;
@property BOOL shouldMessageMainThread;
@property (retain) NSString *powerAssertionIdentifier;
@property (readonly) NSString *uniqueKey;
@property BOOL shouldRunWithBackgroundPriority;
@property (retain) NSError *error;
@property BOOL success;
@property (readonly) long long progressWeight;

- (void)run;
- (void)lock;
- (id)authenticatedAccountDSID;
- (void)main;
- (void)unlock;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)run:(BOOL)a0;
- (void)_keepAliveTimer:(id)a0;
- (BOOL)runSubOperation:(id)a0 returningError:(id *)a1;
- (BOOL)stopRunLoop;
- (void)_addSubOperation:(id)a0;
- (void)_failAfterException;
- (void)_main:(BOOL)a0;
- (void)_removeSubOperation:(id)a0;
- (void)_sendErrorToDelegate:(id)a0;
- (void)_sendSuccessToDelegate;
- (void)_sendWillStartToDelegate;
- (unsigned long long)authenticatedAccountCredentialSource;
- (BOOL)copyAccountID:(id *)a0 credentialSource:(unsigned long long *)a1 byAuthenticatingWithContext:(id)a2 returningError:(id *)a3;
- (BOOL)copyAccountID:(id *)a0 credentialSource:(unsigned long long *)a1 byHandlingAuthenticateResponse:(id)a2 returningError:(id *)a3;
- (id)copyActivePowerAssertionIdentifiers;
- (id)copySerializationLocks;
- (void)delegateDispatch:(id /* block */)a0;
- (void)dispatchCompletionBlock;
- (BOOL)loadSoftwareMapReturningError:(id *)a0;
- (BOOL)loadURLBagWithContext:(id)a0 returningError:(id *)a1;
- (id)loadedURLBagWithContext:(id)a0 accountDSID:(id)a1 returningError:(id *)a2;
- (id)loadedURLBagWithContext:(id)a0 returningError:(id *)a1;
- (void)releasePowerAssertionsDuringBlock:(id /* block */)a0;
- (int)runRunLoopUntilStopped;
- (BOOL)runSubOperation:(id)a0 onQueue:(id)a1 error:(id *)a2;
- (void)sendDidTakeSerializationLocks;
- (void)sendProgressToDelegate;
- (BOOL)shouldFailAfterUniquePredecessorError:(id)a0;

@end
