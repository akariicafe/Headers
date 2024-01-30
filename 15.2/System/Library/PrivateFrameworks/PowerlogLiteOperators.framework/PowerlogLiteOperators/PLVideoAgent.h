@class PLXPCListenerOperatorComposition;

@interface PLVideoAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *notification;
@property (retain) PLXPCListenerOperatorComposition *cMFileListener;
@property (retain) PLXPCListenerOperatorComposition *cMHlsListener;
@property (retain) PLXPCListenerOperatorComposition *cMCrabsListener;
@property (retain) PLXPCListenerOperatorComposition *vTSessionListener;
@property (retain) PLXPCListenerOperatorComposition *groupSessionListener;

+ (id)entryEventBackwardDefinitions;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)stateEnumForStateString:(id)a0;
+ (id)entryEventIntervalDefinitionGroupSession;
+ (id)entryEventForwardDefinitions;
+ (void)load;

- (void)logEventBackwardVTSessionWithEntry:(id)a0;
- (void)logEventForwardVideoWithEntry:(id)a0;
- (void)log;
- (void).cxx_destruct;
- (void)logEventIntervalGroupSession:(id)a0;
- (void)logEventBackwardCMFileWithEntry:(id)a0;
- (void)logEventBackwardCMCrabsWithEntry:(id)a0;
- (void)logEventBackwardCMHlsWithEntry:(id)a0;
- (id)init;
- (void)initOperatorDependancies;

@end
