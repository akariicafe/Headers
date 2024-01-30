@class NSObject;
@protocol OS_dispatch_queue, KGMutableGraphImplementation;

@interface KGMutableGraph : KGGraph

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue;
@property (readonly, nonatomic) id<KGMutableGraphImplementation> mutableImplementation;

- (void).cxx_destruct;
- (BOOL)performChangesAndWait:(id)a0 error:(id *)a1;
- (BOOL)_applyEdgeChangeRequests:(id)a0 error:(id *)a1;
- (BOOL)_applyNodeChangeRequests:(id)a0 error:(id *)a1;
- (BOOL)_performChangesAndWait:(id)a0 error:(id *)a1;
- (id)initWithMutableImplementation:(id)a0;

@end
