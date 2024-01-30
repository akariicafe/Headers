@class PLXPCListenerOperatorComposition;

@interface PLInitialSyncAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *xpcHandler;

+ (id)entryEventIntervalDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (void)logInitialSyncActivityFromEvent:(id)a0;
- (void)logInitialSyncFromEvent:(id)a0;
- (void)initOperatorDependancies;

@end
