@class NSCountedSet, NSMutableDictionary, NSString, NSOperationQueue;

@interface AMSUIAssetQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *underlyingQueue;
@property (retain, nonatomic) NSMutableDictionary *pendingOperations;
@property (retain, nonatomic) NSCountedSet *priorityCounts;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } stateLock;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) long long maxConcurrentOperationCount;
@property (nonatomic, getter=isSuspended) BOOL suspended;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_prepareToAddOperation:(id)a0 withKey:(id)a1;
- (void)_addObserverForOperation:(id)a0;
- (void)_decrementCountAt:(long long)a0;
- (void)_didBeginFetchingAssets;
- (void)_didFetchAllAssetsAtPriority:(long long)a0;
- (void)_didFetchAssetWithKey:(id)a0 producingImage:(id)a1 orError:(id)a2;
- (void)_didFinishFetchingAllAssets;
- (void)_incrementCountAt:(long long)a0;
- (void)_operationDidCancel:(id)a0;
- (void)_operationDidChangePriority:(id)a0;
- (void)_removeObserverForOperation:(id)a0;
- (void)addOperation:(id)a0 withKey:(id)a1;
- (id)operationWithKey:(id)a0;

@end
