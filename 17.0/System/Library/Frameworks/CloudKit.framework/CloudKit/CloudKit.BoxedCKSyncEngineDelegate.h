@class CKSyncEngine, CKSyncEngineSendChangesContext, CKSyncEngineFetchChangesContext, CKSyncEngineFetchChangesOptions, CKSyncEngineEvent, CKSyncEngineRecordZoneChangeBatch, NSArray;

@interface CloudKit.BoxedCKSyncEngineDelegate : NSObject <CKSyncEngineAsyncDelegate> {
    void /* unknown type, empty encoding */ delegate;
}

- (id)init;
- (void).cxx_destruct;
- (void)syncEngine:(CKSyncEngine *)a0 nextFetchChangesOptionsForContext:(CKSyncEngineFetchChangesContext *)a1 completionHandler:(void (^)(CKSyncEngineFetchChangesOptions *))a2;
- (void)syncEngine:(CKSyncEngine *)a0 handleEvent:(CKSyncEngineEvent *)a1 completionHandler:(void (^)(void))a2;
- (void)syncEngine:(CKSyncEngine *)a0 nextRecordZoneChangeBatchForContext:(CKSyncEngineSendChangesContext *)a1 completionHandler:(void (^)(CKSyncEngineRecordZoneChangeBatch *))a2;
- (void)syncEngine:(CKSyncEngine *)a0 relatedApplicationBundleIdentifiersForZoneIDs:(NSArray *)a1 recordIDs:(NSArray *)a2 completionHandler:(void (^)(NSArray *))a3;

@end
