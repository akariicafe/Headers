@class PLXPCListenerOperatorComposition;

@interface PLMDNSAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *startBrowse;
@property (retain) PLXPCListenerOperatorComposition *stopBrowse;
@property (retain) PLXPCListenerOperatorComposition *startAdvertise;
@property (retain) PLXPCListenerOperatorComposition *stopAdvertise;
@property (retain) PLXPCListenerOperatorComposition *startResolve;
@property (retain) PLXPCListenerOperatorComposition *stopResolve;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitionsReceivedMDNSEvent;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)logEventPointMDNS:(id)a0 forEvent:(id)a1;
- (void)initOperatorDependancies;

@end
