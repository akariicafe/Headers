@class PLXPCListenerOperatorComposition;

@interface PLInitialSyncAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *xpcHandler;

+ (void)load;
+ (id)entryEventIntervalDefinitions;

- (void)initOperatorDependancies;
- (void)logInitialSyncActivityFromEvent:(id)a0;
- (void)logInitialSyncFromEvent:(id)a0;
- (void).cxx_destruct;

@end
