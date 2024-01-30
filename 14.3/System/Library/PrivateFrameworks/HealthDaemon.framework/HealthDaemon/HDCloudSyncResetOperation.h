@class CKContainer;

@interface HDCloudSyncResetOperation : HDCloudSyncOperation {
    CKContainer *_container;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 container:(id)a2;
- (id)_deleteZonesOperation;
- (id)_fetchDatabaseChangesOperationForDeleteOperation:(id)a0;

@end
