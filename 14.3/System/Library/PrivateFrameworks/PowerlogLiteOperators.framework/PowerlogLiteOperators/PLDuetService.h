@class PLDuetServiceDAS, PLDuetServiceImpl, PLDuetServiceLpmSource;

@interface PLDuetService : PLService

@property (readonly) PLDuetServiceLpmSource *lpmSource;
@property (readonly) PLDuetServiceDAS *dasEvent;
@property (readonly) PLDuetServiceImpl *impl;

+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitionBatterySaverMode;
+ (id)eventIntervalDefinitionDuetEvents;
+ (id)eventIntervalDefinitionComplicationEvents;
+ (id)aggregateNameDuetEnergyAccumulator;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)initOperatorDependancies;

@end
