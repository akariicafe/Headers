@class PLDuetServiceDAS, PLDuetServiceImpl, PLDuetServiceLpmSource;

@interface PLDuetService : PLService

@property (readonly) PLDuetServiceLpmSource *lpmSource;
@property (readonly) PLDuetServiceDAS *dasEvent;
@property (readonly) PLDuetServiceImpl *impl;

+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)aggregateNameDuetEnergyAccumulator;
+ (id)entryEventForwardDefinitionBatterySaverMode;
+ (id)eventIntervalDefinitionComplicationEvents;
+ (id)eventIntervalDefinitionDuetEvents;

- (void)initOperatorDependancies;
- (void)dealloc;
- (id)init;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void).cxx_destruct;
- (void)handleBatterySaverModeToken:(int)a0 withNotification:(id)a1;
- (void)logEventForwardBatterySaverModeWithState:(BOOL)a0 fromNotification:(id)a1;
- (long long)registrationModeStringToEnum:(id)a0;
- (void)setupBatterySaverModeForNotification:(id)a0;

@end
