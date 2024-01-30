@class HDCloudSyncTarget;

@interface HDCloudSyncPullStoreOperation : HDCloudSyncOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) BOOL hasAppliedChange;
@property (readonly, nonatomic) HDCloudSyncTarget *target;

+ (BOOL)shouldLogAtOperationStart;

- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 target:(id)a2;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (BOOL)finishWithSuccess:(BOOL)a0 error:(id)a1;

@end
