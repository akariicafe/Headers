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

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitionFrameCount;
+ (id)entryEventBackwardDefinitionFrameStats;
+ (id)entryEventForwardDefinitions;
+ (void)load;

- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (void)logEventBackwardFrameStats:(id)a0;
- (void)logFrameCount:(unsigned int)a0 forConnectedState:(BOOL)a1;
- (void)log;
- (void)handleConnectedChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)shouldLogFrameStats;
- (void)logEventForwardFrameCount:(id)a0;
- (void)disableCAScreenTelemetry;
- (void)dealloc;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void)enableCAScreenTelemetry;

@end
