@class FBSDisplayLayoutMonitor, NSString;

@interface PLScreenStateAgent : PLAgent <FBSDisplayLayoutObserver>

@property (retain) FBSDisplayLayoutMonitor *mainDisplayMonitor;
@property (retain) FBSDisplayLayoutMonitor *airPlayDisplayMonitor;
@property (retain) FBSDisplayLayoutMonitor *carPlayDisplayMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointBacklightEvent;
+ (id)entryEventForwardScreenState;
+ (id)entryAggregateDefinitionForeground;

- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)log;
- (void)createCarPlayAccountingEvents:(id)a0;
- (void)initOperatorDependancies;
- (void)logEventForwardCarScreenState:(id)a0;
- (void)logEventForwardAirPlayScreenState:(id)a0;
- (void)logEventForwardMainScreenState:(id)a0;
- (void)accountWithLayoutEntries:(id)a0;
- (void)createAirPlayWiFiAccountingEvent:(id)a0;
- (void)logEventPointMainBacklightEvent:(id)a0 withContext:(id)a1;

@end
