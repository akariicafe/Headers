@class HMFTimer, NSUUID, NSString, HMDSyncOperationOptions;

@interface HMDSyncOperation : HMFObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *zoneName;
@property (readonly, nonatomic) unsigned long long operationType;
@property (retain, nonatomic) HMFTimer *delayTimer;
@property (copy, nonatomic) id /* block */ operationBlock;
@property (readonly, nonatomic) HMDSyncOperationOptions *options;

+ (id)queryDatabaseOperationWithBlock:(id /* block */)a0;
+ (id)cancelOperationWithBlock:(id /* block */)a0;
+ (id)postFetchOperationWithBlock:(id /* block */)a0;
+ (id)cloudPushSyncOperationWithBlock:(id /* block */)a0;
+ (id)cloudForcePushSyncOperationWithBlock:(id /* block */)a0;
+ (id)cloudVerifyAccountSyncOperationWithBlock:(id /* block */)a0;
+ (id)cloudFetchSyncOperationWithCloudConflict:(BOOL)a0 block:(id /* block */)a1;
+ (id)cloudZonePushSyncOperation:(id)a0 block:(id /* block */)a1;
+ (id)cloudZoneFetchSyncOperation:(id)a0 cloudConflict:(BOOL)a1 block:(id /* block */)a2;
+ (id)cloudOperation:(id)a0 withBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (id)description;
- (id)_initWithOptions:(id)a0 syncBlock:(id /* block */)a1;

@end
