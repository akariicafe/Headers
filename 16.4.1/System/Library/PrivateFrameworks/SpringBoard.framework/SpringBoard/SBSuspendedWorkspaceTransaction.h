@class NSString, NSMapTable, NSMutableSet, NSError;

@interface SBSuspendedWorkspaceTransaction : SBMainWorkspaceTransaction <FBApplicationProcessLaunchTransactionObserver> {
    NSMapTable *_launchTransactionToSceneEntityMap;
    NSMutableSet *_outstandingProcessLaunchTransactions;
    NSMutableSet *_incompleteProcessLaunchTransactions;
    NSError *_anyLaunchError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_begin;
- (void)_childTransactionDidComplete:(id)a0;
- (void)_didComplete;
- (void)transaction:(id)a0 willLaunchProcess:(id)a1;
- (void)_addSceneEntityToAppRecency:(id)a0;
- (void).cxx_destruct;
- (void)_sendActivationResultWithError:(id)a0;

@end
