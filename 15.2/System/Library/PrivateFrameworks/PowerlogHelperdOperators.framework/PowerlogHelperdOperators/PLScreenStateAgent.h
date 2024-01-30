@class FBSDisplayLayoutMonitor, PLXPCListenerOperatorComposition, NSString;

@interface PLScreenStateAgent : PLAgent <FBSDisplayLayoutObserver>

@property (retain) FBSDisplayLayoutMonitor *mainDisplayMonitor;
@property (retain) FBSDisplayLayoutMonitor *airPlayDisplayMonitor;
@property (retain) FBSDisplayLayoutMonitor *carPlayDisplayMonitor;
@property (retain) PLXPCListenerOperatorComposition *iconDraggingListner;
@property (retain) PLXPCListenerOperatorComposition *widgetAdditionAnimationListener;
@property (retain) PLXPCListenerOperatorComposition *widgetFlipAnimationListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)entryEventPointBacklightEvent;
+ (id)entryEventForwardScreenState;
+ (id)entryEventBackwardDefinitionIconDragging;
+ (id)entryAggregateDefinitionWidgetAdditionAnimation;
+ (id)entryAggregateDefinitionWidgetFlipAnimation;
+ (id)entryAggregateDefinitionForeground;

- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (void)createCarPlayAccountingEvents:(id)a0;
- (void)log;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)initOperatorDependancies;
- (void)logEventForwardCarScreenState:(id)a0;
- (void)logEventForwardAirPlayScreenState:(id)a0;
- (void)logEventBackwardIconDragging:(id)a0;
- (void)logAggregateWidgetAdditionAnimation:(id)a0;
- (void)logAggregateWidgetFlipAnimation:(id)a0;
- (void)logEventForwardMainScreenState:(id)a0;
- (void)accountWithLayoutEntries:(id)a0;
- (void)createAirPlayWiFiAccountingEvent:(id)a0;
- (void)logEventPointMainBacklightEvent:(id)a0 withContext:(id)a1;

@end
