@class BCCloudKitController, NSString, NSObject, BCCloudDataSyncManager, BCCloudDataManager, BCCloudDataSource, NSURL;
@protocol OS_dispatch_queue;

@interface BCCloudAssetAnnotationManager : NSObject <BCCloudDataSyncManagerDelegate, BCCloudAssetAnnotationManager> {
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (weak, nonatomic) BCCloudKitController *cloudKitController;
@property (retain, nonatomic) BCCloudDataSource *annotationsDataSource;
@property (retain, nonatomic) BCCloudDataSyncManager *syncManager;
@property (retain, nonatomic) BCCloudDataManager *dataManager;
@property (retain, nonatomic) NSURL *ckAssetStoreDirectory;
@property (nonatomic) BOOL enableCloudSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)entityName;
- (void)dealloc;
- (void).cxx_destruct;
- (void)assetWithID:(id)a0 updatedAnnotations:(id)a1 completion:(id /* block */)a2;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)a0;
- (id)fileURLForCachingCKAssetWithAssetID:(id)a0;
- (void)getAnnotationChangesSince:(id)a0 completion:(id /* block */)a1;
- (id)initWithCloudDataSource:(id)a0 cloudKitController:(id)a1;
- (void)signalSyncToCKForSyncManager:(id)a0;
- (void)syncManager:(id)a0 failedRecordIDs:(id)a1 completion:(id /* block */)a2;
- (void)syncManager:(id)a0 removeCloudDataForIDs:(id)a1 completion:(id /* block */)a2;
- (void)syncManager:(id)a0 resolveConflictsForRecords:(id)a1 completion:(id /* block */)a2;
- (void)syncManager:(id)a0 startSyncToCKWithCompletion:(id /* block */)a1;
- (void)syncManager:(id)a0 updateSyncGenerationFromCloudData:(id)a1 completion:(id /* block */)a2;

@end
