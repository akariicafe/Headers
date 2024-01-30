@class PCPersistentTimer;
@protocol DNDSScheduleLifetimeMonitorDataSource;

@interface DNDSScheduleLifetimeMonitor : DNDSBaseLifetimeMonitor {
    PCPersistentTimer *_lifetimeTimer;
}

@property (weak, nonatomic) id<DNDSScheduleLifetimeMonitorDataSource> dataSource;

+ (Class)lifetimeClass;

- (void).cxx_destruct;
- (void)_timerFired:(id)a0;
- (id)updateForModeAssertions:(id)a0 date:(id)a1;
- (id)_activeDateIntervalForScheduleLifetime:(id)a0 assertionStartDate:(id)a1 date:(id)a2 scheduleSettings:(id)a3 calendar:(id)a4 ignoreMatchScheduleStartDate:(BOOL)a5;
- (id)activeDateIntervalForScheduleLifetime:(id)a0 assertionStartDate:(id)a1 date:(id)a2;
- (id)nextActiveDateIntervalForScheduleLifetime:(id)a0 assertionStartDate:(id)a1 date:(id)a2;

@end
