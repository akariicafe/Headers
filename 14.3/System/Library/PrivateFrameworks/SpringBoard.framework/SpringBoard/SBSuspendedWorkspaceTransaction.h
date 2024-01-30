@class NSString, NSMapTable, NSMutableSet;

@interface SBSuspendedWorkspaceTransaction : SBMainWorkspaceTransaction <FBApplicationProcessLaunchTransactionObserver> {
    NSMapTable *_launchTransactionToSceneEntityMap;
    NSMutableSet *_outstandingProcessLaunchTransactions;
    NSMutableSet *_incompleteProcessLaunchTransactions;
    BOOL _anyLaunchFailed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transaction:(id)a0 willLaunchProcess:(id)a1;
- (void)_sendActivationResultWithError:(id)a0;
- (void)_childTransactionDidComplete:(id)a0;
- (void).cxx_destruct;
- (void)_didComplete;
- (void)_begin;

@end
