@class PLXPCListenerOperatorComposition;

@interface PLMDNSAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *startBrowse;
@property (retain) PLXPCListenerOperatorComposition *stopBrowse;
@property (retain) PLXPCListenerOperatorComposition *startAdvertise;
@property (retain) PLXPCListenerOperatorComposition *stopAdvertise;
@property (retain) PLXPCListenerOperatorComposition *startResolve;
@property (retain) PLXPCListenerOperatorComposition *stopResolve;

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionsReceivedMDNSEvent;
+ (id)entryEventForwardDefinitions;
+ (void)load;

- (void)log;
- (void).cxx_destruct;
- (id)init;
- (void)logEventPointMDNS:(id)a0 forEvent:(id)a1;
- (void)initOperatorDependancies;

@end
