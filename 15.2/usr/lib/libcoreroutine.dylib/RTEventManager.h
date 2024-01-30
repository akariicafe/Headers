@class NSString, RTInvocationDispatcher;

@interface RTEventManager : RTService <RTTransientObjectProtocol>

@property (retain, nonatomic) RTInvocationDispatcher *invocationDispatcher;
@property (retain, nonatomic) id eventStore;
@property (nonatomic) BOOL accessToEventsGranted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEventStore:(id)a0;
- (void)fetchEventsBetweenStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)fetchEventsBetweenStartDate:(id)a0 andEndDate:(id)a1 includeSuggestions:(BOOL)a2 withHandler:(id /* block */)a3;
- (void)_fetchCurrentlyInEventWithHandler:(id /* block */)a0;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)fetchLastEventEndDateWithHandler:(id /* block */)a0;
- (void)fetchNextFreeStartDateWithHandler:(id /* block */)a0;
- (void)_fetchFreeDateIntervalsBetweenStartDate:(id)a0 endDate:(id)a1 filterAllDayEvents:(BOOL)a2 filterFreeTimeEvents:(BOOL)a3 handler:(id /* block */)a4;
- (void)fetchEventsBetweenStartDate:(id)a0 andEndDate:(id)a1 withHandler:(id /* block */)a2;
- (void)transientObjectDidCreateBackingObject:(id)a0;
- (id)eventsSortedByEndDateBetweenStartDate:(id)a0 andEndDate:(id)a1;
- (void)_fetchNextFreeStartDateWithHandler:(id /* block */)a0;
- (void)transientObjectDidReleaseBackingObject:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)calendarsExcludingSuggested;
- (id)eventsSortedByStartDateBetweenStartDate:(id)a0 andEndDate:(id)a1 calendars:(id)a2;
- (void)_fetchEventsBetweenStartDate:(id)a0 andEndDate:(id)a1 includeSuggestions:(BOOL)a2 withHandler:(id /* block */)a3;
- (id)eventsSortedByStartDateBetweenStartDate:(id)a0 andEndDate:(id)a1;
- (id)eventsBetweenStartDate:(id)a0 andEndDate:(id)a1;
- (void)fetchCurrentlyInEventWithHandler:(id /* block */)a0;
- (void)_fetchLastEventEndDateWithHandler:(id /* block */)a0;
- (void)fetchFreeDateIntervalsBetweenStartDate:(id)a0 endDate:(id)a1 filterAllDayEvents:(BOOL)a2 filterFreeTimeEvents:(BOOL)a3 handler:(id /* block */)a4;
- (id)eventsBetweenStartDate:(id)a0 andEndDate:(id)a1 calendars:(id)a2;
- (void)_fetchEventsBetweenStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (id)calendars;

@end
