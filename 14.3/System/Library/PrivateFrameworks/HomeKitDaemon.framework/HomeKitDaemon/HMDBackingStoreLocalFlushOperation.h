@class HMDBackingStoreLocal;

@interface HMDBackingStoreLocalFlushOperation : NSOperation

@property (retain, nonatomic) HMDBackingStoreLocal *store;
@property (copy, nonatomic) id /* block */ resultHandler;
@property (nonatomic) BOOL clearCloud;

- (void).cxx_destruct;
- (void)main;
- (id)initWithStore:(id)a0 clearCloud:(BOOL)a1 resultHandler:(id /* block */)a2;

@end
