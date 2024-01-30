@class NSString, HDSynchronousTaskGroup;

@interface HDCloudSyncSeizeAbandonedStoresOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    HDSynchronousTaskGroup *_taskGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;
- (void)_computeTargetsForSeizure;
- (void)_markPendingOwnerForSeizureTargets;
- (id)_updatedStoreRecordsForContainer:(id)a0;

@end
