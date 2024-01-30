@class PLTimer, NSMutableDictionary, PLXPCListenerOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLBLMDebugService : PLService

@property (retain) PLXPCListenerOperatorComposition *xpcListenerBLMDebugTrigger;
@property (retain) PLEntryNotificationOperatorComposition *ioreportCallback;
@property (retain) PLEntryNotificationOperatorComposition *processnetworkCallback;
@property (retain) PLEntryNotificationOperatorComposition *wifiCallback;
@property (retain) PLEntryNotificationOperatorComposition *bbCallback;
@property (retain) PLEntryNotificationOperatorComposition *btCallback;
@property (retain) PLEntryNotificationOperatorComposition *displayAPLCallback;
@property (retain) PLTimer *debugTimers;
@property (retain) NSMutableDictionary *triggers;

+ (void)load;
+ (id)entryEventNoneDefinitions;
+ (BOOL)isModelTriggerRun;
+ (id)entryEventNoneDefinitionBLMDebug;

- (void)initOperatorDependancies;
- (void)triggerLoggersNow:(id)a0;
- (void)registerTrigger:(id)a0;
- (void)triggerSelectorAtDate:(id)a0 withSelector:(SEL)a1 withUseInfo:(id)a2;
- (id)Testservice:(id)a0;
- (id)init;
- (double)energyForRootNodeID:(int)a0 withRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1;
- (id)respondBLMDDebugQuery:(id)a0;
- (void)debugTrigger;
- (void).cxx_destruct;
- (id)logRailData:(int)a0 withTriggerName:(id)a1 inTimeRange:(struct _PLTimeIntervalRange { double x0; double x1; })a2;

@end
