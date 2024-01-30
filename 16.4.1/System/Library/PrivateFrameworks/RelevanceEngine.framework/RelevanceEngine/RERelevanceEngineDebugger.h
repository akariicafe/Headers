@class NSArray, REObserverStore, NSObject;
@protocol OS_dispatch_queue;

@interface RERelevanceEngineDebugger : RESingleton {
    REObserverStore *_observerStore;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSArray *availableEngines;

- (id)_init;
- (void).cxx_destruct;
- (BOOL)_isValidEngine:(id)a0;
- (id)engineWithName:(id)a0;
- (void)_registerEngine:(id)a0;
- (void)_unregisterEngine:(id)a0;
- (id)allRelevanceProviderValuesForEngine:(id)a0;
- (id)dataSourceElementsForEngine:(id)a0;
- (id)diagnosticLogsForEngine:(id)a0;
- (id)firstEngine;
- (id)orderedElementsForEngine:(id)a0;
- (void)reloadDataSourceForEngine:(id)a0;

@end
