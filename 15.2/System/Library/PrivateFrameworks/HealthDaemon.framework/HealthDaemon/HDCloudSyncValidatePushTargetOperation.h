@class HDCloudSyncTarget;

@interface HDCloudSyncValidatePushTargetOperation : HDCloudSyncOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) HDCloudSyncTarget *target;
@property (readonly, nonatomic) long long result;

+ (BOOL)shouldLogAtOperationStart;

- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)analyticsDictionary;
- (void)main;
- (void).cxx_destruct;

@end
