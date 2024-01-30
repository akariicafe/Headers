@class NSUUID, HMDBackingStore, NSString;

@interface HMDBackingStoreOperation : NSOperation <HMFLogging>

@property (retain, nonatomic) HMDBackingStore *store;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (readonly, nonatomic) NSUUID *operationUUID;
@property (copy) id /* block */ operationFinishBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void)main;
- (id)initWithResultBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)mainReturningError;

@end
