@class WBSPasswordBreachQueuedPasswordBagManager, WBSPasswordBreachRequestManager, WBSPasswordBreachContext;

@interface WBSPasswordBreachChecker : NSObject {
    WBSPasswordBreachContext *_context;
    WBSPasswordBreachQueuedPasswordBagManager *_bagManager;
    WBSPasswordBreachRequestManager *_requestManager;
}

- (void)_mergeResultsByUUID:(id)a0 intoResultsByPersistentIdentifier:(id)a1 usingQueuedPasswordsbyUUID:(id)a2;
- (void)_checkLowFrequencyBatchesWithBagManager:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_checkHighFrequencyBucketForPasswords:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithContext:(id)a0 bagManager:(id)a1;
- (void)checkPasswordBatchesWithCompletionHandler:(id /* block */)a0;

@end
