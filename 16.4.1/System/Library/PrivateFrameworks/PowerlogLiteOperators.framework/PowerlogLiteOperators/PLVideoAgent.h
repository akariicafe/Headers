@class PLXPCListenerOperatorComposition;

@interface PLVideoAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *notification;
@property (retain) PLXPCListenerOperatorComposition *cMFileListener;
@property (retain) PLXPCListenerOperatorComposition *cMHlsListener;
@property (retain) PLXPCListenerOperatorComposition *cMCrabsListener;
@property (retain) PLXPCListenerOperatorComposition *vTSessionListener;
@property (retain) PLXPCListenerOperatorComposition *groupSessionListener;

+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)defaults;
+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventIntervalDefinitionGroupSession;
+ (id)stateEnumForStateString:(id)a0;

- (void)initOperatorDependancies;
- (void)log;
- (void)logEventBackwardCMHlsWithEntry:(id)a0 withProcess:(id)a1;
- (void)logEventBackwardCMFileWithEntry:(id)a0 withProcess:(id)a1;
- (void)logEventForwardVideoWithEntry:(id)a0;
- (void)logEventBackwardCMCrabsWithEntry:(id)a0 withProcess:(id)a1;
- (void)logEventBackwardVTSessionWithEntry:(id)a0;
- (id)init;
- (void)logEventIntervalGroupSession:(id)a0;
- (void).cxx_destruct;

@end
