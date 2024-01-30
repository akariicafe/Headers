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

+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)entryEventBackwardDefinitionFrameStats;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventBackwardDefinitionFrameCount;

- (void)initOperatorDependancies;
- (void)disableCAScreenTelemetry;
- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (void)log;
- (void)enableCAScreenTelemetry;
- (void)logEventBackwardFrameStats:(id)a0;
- (void)logEventForwardFrameCount:(id)a0;
- (void)handleConnectedChange:(id)a0;
- (void)dealloc;
- (void)initTaskOperatorDependancies;
- (BOOL)shouldLogFrameStats;
- (id)init;
- (void)logFrameCount:(unsigned int)a0 forConnectedState:(BOOL)a1;
- (void).cxx_destruct;

@end
