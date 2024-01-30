@class HMFTimer, NSUUID, NSString, HMDSyncOperationOptions, NSArray, NSMutableArray;

@interface HMDSyncOperation : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_operationCompletions;
}

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *zoneName;
@property (readonly, nonatomic) unsigned long long operationType;
@property (retain, nonatomic) HMFTimer *delayTimer;
@property (copy, nonatomic) id /* block */ operationBlock;
@property (readonly, nonatomic) HMDSyncOperationOptions *options;
@property (readonly) NSArray *operationCompletions;

+ (id)cancelOperationWithBlock:(id /* block */)a0;
+ (id)cloudFetchSyncOperationWithCloudConflict:(BOOL)a0 block:(id /* block */)a1;
+ (id)cloudForcePushSyncOperationWithBlock:(id /* block */)a0;
+ (id)cloudOperation:(id)a0 withBlock:(id /* block */)a1 completion:(id /* block */)a2;
+ (id)cloudPushSyncOperationWithBlock:(id /* block */)a0;
+ (id)cloudVerifyAccountSyncOperationWithBlock:(id /* block */)a0;
+ (id)cloudZoneFetchSyncOperation:(id)a0 cloudConflict:(BOOL)a1 block:(id /* block */)a2 completion:(id /* block */)a3;
+ (id)cloudZonePushSyncOperation:(id)a0 block:(id /* block */)a1;
+ (id)postFetchOperationWithBlock:(id /* block */)a0;
+ (id)queryDatabaseOperationWithBlock:(id /* block */)a0;

- (id)description;
- (void).cxx_destruct;
- (id)_initWithOptions:(id)a0 syncBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)removeAllOperationCompletions;
- (void)updateOperationCompletionsWithArray:(id)a0;

@end
