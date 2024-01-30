@class PLXPCListenerOperatorComposition;

@interface PLInitialSyncAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *xpcHandler;

+ (void)load;
+ (id)entryEventIntervalDefinitions;

- (void).cxx_destruct;
- (void)logInitialSyncFromEvent:(id)a0;
- (void)initOperatorDependancies;
- (void)logInitialSyncActivityFromEvent:(id)a0;

@end
