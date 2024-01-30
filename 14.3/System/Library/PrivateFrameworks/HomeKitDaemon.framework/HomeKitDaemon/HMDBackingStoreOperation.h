@class NSUUID, HMDBackingStore;

@interface HMDBackingStoreOperation : NSOperation

@property (retain, nonatomic) HMDBackingStore *store;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (readonly, nonatomic) NSUUID *operationUUID;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)initWithResultBlock:(id /* block */)a0;
- (id)description;
- (id)mainReturningError;

@end
