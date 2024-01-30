@class PLXPCListenerOperatorComposition;

@interface PLVideoAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *notification;
@property (retain) PLXPCListenerOperatorComposition *cMFileListener;
@property (retain) PLXPCListenerOperatorComposition *cMHlsListener;
@property (retain) PLXPCListenerOperatorComposition *cMCrabsListener;
@property (retain) PLXPCListenerOperatorComposition *vTSessionListener;

+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)stateEnumForStateString:(id)a0;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;

- (id)init;
- (void).cxx_destruct;
- (void)logEventBackwardCMCrabsWithEntry:(id)a0;
- (void)log;
- (void)logEventBackwardVTSessionWithEntry:(id)a0;
- (void)logEventBackwardCMHlsWithEntry:(id)a0;
- (void)logEventForwardVideoWithEntry:(id)a0;
- (void)logEventBackwardCMFileWithEntry:(id)a0;
- (void)initOperatorDependancies;

@end
