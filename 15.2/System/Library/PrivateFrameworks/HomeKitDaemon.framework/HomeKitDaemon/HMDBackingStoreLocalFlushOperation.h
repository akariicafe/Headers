@class HMDBackingStoreLocal;

@interface HMDBackingStoreLocalFlushOperation : NSOperation

@property (retain, nonatomic) HMDBackingStoreLocal *store;
@property (copy, nonatomic) id /* block */ resultHandler;
@property (nonatomic) BOOL clearCloud;

- (void)main;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0 clearCloud:(BOOL)a1 resultHandler:(id /* block */)a2;

@end
