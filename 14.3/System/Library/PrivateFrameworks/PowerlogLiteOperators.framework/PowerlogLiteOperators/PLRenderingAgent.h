@class FBSDisplayLayoutMonitor, NSString, PLEntryNotificationOperatorComposition, PLXPCListenerOperatorComposition, NSNumber;

@interface PLRenderingAgent : PLAgent <FBSDisplayLayoutObserver>

@property (retain) FBSDisplayLayoutMonitor *mainDisplayMonitor;
@property (retain) PLEntryNotificationOperatorComposition *pluggedInStateNotification;
@property unsigned int lastFrameCount;
@property (retain) NSNumber *deviceIsPlugged;
@property (retain) PLXPCListenerOperatorComposition *frameStatsListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventBackwardDefinitionFrameStats;
+ (id)entryEventBackwardDefinitionFrameCount;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;

- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)logFrameCount:(unsigned int)a0 forConnectedState:(BOOL)a1;
- (void)dealloc;
- (void)enableCAScreenTelemetry;
- (void)log;
- (void)logEventForwardFrameCount:(id)a0;
- (BOOL)shouldLogFrameStats;
- (void)initTaskOperatorDependancies;
- (void)disableCAScreenTelemetry;
- (void)handleConnectedChange:(id)a0;
- (void)logEventBackwardFrameStats:(id)a0;
- (void)initOperatorDependancies;

@end
