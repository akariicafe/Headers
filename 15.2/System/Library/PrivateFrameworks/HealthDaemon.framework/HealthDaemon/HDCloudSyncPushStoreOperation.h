@class HDCloudSyncTarget, _HDCloudSyncStorePersistableState;

@interface HDCloudSyncPushStoreOperation : HDCloudSyncOperation {
    HDCloudSyncTarget *_target;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _HDCloudSyncStorePersistableState *_storeState;
}

@property (copy) HDCloudSyncTarget *target;

+ (BOOL)shouldLogAtOperationStart;

- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 target:(id)a2;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)main;
- (void).cxx_destruct;

@end
