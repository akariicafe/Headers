@class NSArray, REObserverStore, NSObject;
@protocol OS_dispatch_queue;

@interface RERelevanceEngineDebugger : RESingleton {
    REObserverStore *_observerStore;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSArray *availableEngines;

- (void).cxx_destruct;
- (id)_init;
- (BOOL)_isValidEngine:(id)a0;
- (id)engineWithName:(id)a0;
- (id)firstEngine;
- (id)diagnosticLogsForEngine:(id)a0;
- (void)reloadDataSourceForEngine:(id)a0;
- (id)dataSourceElementsForEngine:(id)a0;
- (id)allRelevanceProviderValuesForEngine:(id)a0;
- (id)orderedElementsForEngine:(id)a0;
- (void)_registerEngine:(id)a0;
- (void)_unregisterEngine:(id)a0;

@end
