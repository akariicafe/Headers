@class FPMoveInfo, FPItem, NSArray, NSURL, NSMutableDictionary, NSDictionary, NSMutableSet, FPProgressManager;
@protocol NSXPCProxyCreating, FPDaemonActionOperation;

@interface FPMoveOperation : FPActionOperation <FPDaemonActionOperationClient> {
    FPMoveInfo *_info;
    NSArray *__sourceURLs;
    NSArray *__sourceItems;
    NSURL *__destinationURL;
    FPItem *__destinationFolder;
    FPProgressManager *_progressManager;
    BOOL _isScheduledFromThisClient;
    id<NSXPCProxyCreating, FPDaemonActionOperation> _remoteMoveOperation;
    NSMutableSet *_createdOrFailedRoots;
    NSMutableDictionary *_createdItemsByRoot;
    NSMutableDictionary *_placeholderIDsByRoot;
    NSMutableDictionary *_URLByResolvedFPItem;
}

@property (copy, nonatomic) NSMutableDictionary *progressByRoot;
@property (copy, nonatomic) id /* block */ _t_patchActionOperationInfo;
@property (copy, nonatomic) id /* block */ _t_remoteOperationWasScheduled;
@property (copy, nonatomic) id /* block */ _t_rootCompleted;
@property (nonatomic) BOOL shouldBounceOnCollision;
@property (nonatomic) unsigned long long lastUsageUpdatePolicy;
@property (copy, nonatomic) NSDictionary *targetFilenamesByURL;
@property (copy, nonatomic) NSDictionary *targetFilenamesByItem;
@property (readonly, nonatomic) BOOL byCopy;
@property (readonly, nonatomic) NSDictionary *transferResults;
@property (readonly, nonatomic) NSDictionary *errorsByItem;
@property (readonly, nonatomic) NSDictionary *transferLocations;
@property (readonly, nonatomic) NSMutableDictionary *filenamesByURL;

- (void)cancel;
- (void).cxx_destruct;
- (void)_runWithRemoteOperation:(id)a0;
- (void)_completedWithResultsByRoot:(id)a0 errorsByRoot:(id)a1 error:(id)a2;
- (void)remoteOperationCreatedRoot:(id)a0 resultingItem:(id)a1 completion:(id /* block */)a2;
- (void)remoteOperationCompletedRoot:(id)a0 resultingItem:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (id)initWithRemoteOperation:(id)a0 info:(id)a1;
- (void)remoteOperationProgressesAreReady;
- (void)remoteOperationFinishedSendingPastUpdates;
- (unsigned long long)defaultLastUsedDatePolicy;
- (void)checkNonEmptyPackage;
- (id)initWithSourceItems:(id)a0 orSourceURLs:(id)a1 destinationFolder:(id)a2 orDestinationURL:(id)a3 action:(id)a4;
- (void)_recomputeMoveInfoIfNecessary;
- (void)_resolveURLsWithCompletionHandler:(id /* block */)a0;
- (void)_presendNotifications;
- (void)_scheduleAgainAfterErrorRecovery;
- (void)_completedWithResult:(id)a0 error:(id)a1;
- (void)_recoverFromCollisionError:(id)a0 withPolicy:(unsigned long long)a1;
- (void)_t_unblockReader;
- (BOOL)_preflightCheckNotMovingIntoSelfWithError:(id *)a0;
- (BOOL)_preflightCheckProviderCanMoveWithErrors:(id *)a0;
- (void)_preflightForceBounceIfCopyingOntoSelf;
- (id)initWithSourceURLs:(id)a0 destinationFolder:(id)a1;
- (void)subclassPreflightWithCompletion:(id /* block */)a0;
- (id)initWithSourceURLsAndNames:(id)a0 destinationFolder:(id)a1;
- (id)fp_prettyDescription;
- (id)operationDescription;
- (void)completedWithResult:(id)a0 error:(id)a1;
- (id)initWithItems:(id)a0 destinationURL:(id)a1;
- (void)actionMain;
- (id)initWithURLs:(id)a0 destinationFolder:(id)a1;
- (id)initWithItems:(id)a0 destinationFolder:(id)a1;
- (void)presendNotifications;

@end
