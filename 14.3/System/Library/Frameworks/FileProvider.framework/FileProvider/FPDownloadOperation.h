@class FPDownloadInfo, NSArray, NSMutableDictionary, NSMutableSet, NSObservation, NSObject;
@protocol OS_dispatch_source, NSXPCProxyCreating, FPDaemonActionOperation;

@interface FPDownloadOperation : FPActionOperation <FPDaemonActionOperationClient> {
    NSArray *_items;
    FPDownloadInfo *_info;
    NSMutableSet *_itemsPendingDownload;
    NSObject<OS_dispatch_source> *_stitchingTimer;
    id<NSXPCProxyCreating, FPDaemonActionOperation> _remoteMoveOperation;
    NSMutableDictionary *_progressByRoot;
    NSObservation *_observation;
    NSMutableDictionary *_childProxies;
    NSMutableDictionary *_globalChildProxies;
}

@property (copy, nonatomic) id /* block */ _t_patchActionOperationInfo;
@property (nonatomic) BOOL recursively;
@property (copy, nonatomic) id /* block */ downloadCompletionBlock;

- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (void)_setupParentProgress;
- (void)showItemsAsDownloadingEvenIfDownloaded:(BOOL)a0;
- (void)_recomputeDownloadInfoIfNecessary;
- (void)_runWithRemoteOperation:(id)a0;
- (void)_removeProgressWithItemID:(id)a0;
- (void)_updateProgressWithUpdatedFileCountForItem:(id)a0;
- (void)_completedWithResultsByRoot:(id)a0 errorsByRoot:(id)a1 error:(id)a2;
- (void)_updateParentProgressForItem:(id)a0;
- (void)_updateGlobalParentProgressForItem:(id)a0;
- (void)_retrieveChildProgressForItem:(id)a0 childProxies:(id)a1 parentSetup:(id /* block */)a2;
- (void)remoteOperationCreatedRoot:(id)a0 resultingItem:(id)a1 completion:(id /* block */)a2;
- (void)remoteOperationCompletedRoot:(id)a0 resultingItem:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (id)initWithRemoteOperation:(id)a0 info:(id)a1;
- (void)remoteOperationProgressesAreReady;
- (void)remoteOperationFinishedSendingPastUpdates;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)fp_prettyDescription;
- (void)completedWithResult:(id)a0 error:(id)a1;
- (void)actionMain;
- (void)presendNotifications;

@end
