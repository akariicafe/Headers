@class PCPersistentTimer, EKEventStore;

@interface DNDSCalendarEventLifetimeMonitor : DNDSBaseLifetimeMonitor {
    EKEventStore *_eventStore;
    PCPersistentTimer *_lifetimeTimer;
}

+ (Class)lifetimeClass;

- (id)init;
- (void).cxx_destruct;
- (void)_timerFired:(id)a0;
- (id)updateForModeAssertions:(id)a0 date:(id)a1;
- (void)_calendarEventStoreChangedWithNotification:(id)a0;
- (id)activeDateIntervalForCalendarEventLifetime:(id)a0 assertionStartDate:(id)a1;

@end
