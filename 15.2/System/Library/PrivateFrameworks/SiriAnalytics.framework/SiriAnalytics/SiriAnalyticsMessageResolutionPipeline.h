@class NSHashTable, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SiriAnalyticsMessageResolutionPipeline : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_resolvers;
    NSMutableArray *_resolutionTimers;
}

- (id)initWithQueue:(id)a0;
- (void)registerMessageResolver:(id)a0;
- (void)_discardResolutionTimer:(id)a0;
- (void).cxx_destruct;
- (void)resolveMessage:(id)a0 timestamp:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)_startResolutionTimerWithElapsed:(id /* block */)a0;
- (void)_continueResolutionWithMessage:(id)a0 resolvers:(id)a1 currentResolverIndex:(unsigned long long)a2 resolversApplied:(unsigned long long)a3 completion:(id /* block */)a4;

@end
