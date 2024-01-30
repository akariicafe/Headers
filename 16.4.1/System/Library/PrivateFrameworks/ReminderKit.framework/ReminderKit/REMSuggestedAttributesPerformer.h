@class REMStore, NSObject;
@protocol OS_dispatch_queue, REMXPCSuggestedAttributesPerformer;

@interface REMSuggestedAttributesPerformer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) REMStore *store;
@property (retain, nonatomic) id<REMXPCSuggestedAttributesPerformer> q_cachedXPCPerformer;

- (id)resultFromPerformingSwiftInvocation:(id)a0 parametersData:(id)a1 storages:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 store:(id)a1;
- (void)preWarmModels;
- (id)q_resolveSuggestedAttributesPerformerWithReason:(id)a0 errorHandler:(id /* block */)a1;
- (id)q_syncSuggestedAttributesPerformerWithReason:(id)a0 errorHandler:(id /* block */)a1;

@end
