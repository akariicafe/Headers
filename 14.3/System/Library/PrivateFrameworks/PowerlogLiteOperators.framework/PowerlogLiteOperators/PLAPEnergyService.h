@class PLIOReportStats, PLEntryNotificationOperatorComposition;

@interface PLAPEnergyService : PLService

@property (retain) PLEntryNotificationOperatorComposition *displayOnNotification;
@property (retain) PLEntryNotificationOperatorComposition *displayOffNotification;
@property (retain) PLEntryNotificationOperatorComposition *wakeEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *canSleepEntryNotification;
@property unsigned long long currentState;
@property unsigned long long currentEvent;
@property (retain) PLIOReportStats *energyModelIOReport;
@property (retain) PLIOReportStats *deviceStatsIOReport;

+ (void)load;
+ (id)entryEventIntervalDefinitionCPUEnergyStats;
+ (id)entryEventIntervalDefinitions;

- (id)init;
- (void).cxx_destruct;
- (id)updateDutyCycleMetrics;
- (void)initTaskOperatorDependancies;
- (unsigned long long)getEventStateForEndEvent:(unsigned long long)a0 withBeginEvent:(unsigned long long)a1;
- (void)logPLEnergies:(id)a0 withCpuDutyCycle:(id)a1 andDuration:(id)a2;
- (void)handleEventNotification:(unsigned long long)a0;
- (id)updateEnergyMetrics;

@end
