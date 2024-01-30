@class NSDate, EKEventStore;

@interface DNDSCalendarEventLifetimeMonitor : DNDSBaseLifetimeMonitor {
    EKEventStore *_eventStore;
    NSDate *_lifetimeTimerFireDate;
}

+ (Class)lifetimeClass;

- (id)updateForModeAssertions:(id)a0 date:(id)a1;
- (id)_eventStoreCreatingIfNeeded;
- (void)setDelegate:(id)a0;
- (id)_eventForCalendarEventLifetime:(id)a0 assertionStartDate:(id)a1;
- (id)init;
- (id)activeDateIntervalForCalendarEventLifetime:(id)a0 assertionStartDate:(id)a1;
- (void)_calendarEventStoreChangedWithNotification:(id)a0;
- (id)_eventStore;
- (void).cxx_destruct;

@end
