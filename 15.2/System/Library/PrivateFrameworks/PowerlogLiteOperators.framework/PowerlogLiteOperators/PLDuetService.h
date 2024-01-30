@class PLDuetServiceDAS, PLDuetServiceImpl, PLDuetServiceLpmSource;

@interface PLDuetService : PLService

@property (readonly) PLDuetServiceLpmSource *lpmSource;
@property (readonly) PLDuetServiceDAS *dasEvent;
@property (readonly) PLDuetServiceImpl *impl;

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)entryEventForwardDefinitionBatterySaverMode;
+ (id)eventIntervalDefinitionDuetEvents;
+ (id)eventIntervalDefinitionComplicationEvents;
+ (id)aggregateNameDuetEnergyAccumulator;

- (void).cxx_destruct;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (id)init;
- (void)dealloc;
- (void)initOperatorDependancies;
- (void)setupBatterySaverModeForNotification:(id)a0;
- (void)handleBatterySaverModeToken:(int)a0 withNotification:(id)a1;
- (void)logEventForwardBatterySaverModeWithState:(BOOL)a0 fromNotification:(id)a1;

@end
