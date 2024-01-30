@class NSMutableSet;

@interface CLSCalendarEventsCache : NSObject

@property (readonly, nonatomic) NSMutableSet *years;

- (void)insertEvent:(id)a0;
- (id)eventsForStartDate:(id)a0 endDate:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)debugDescription;
- (void)enumerateEventsFromStartDate:(id)a0 toEndDate:(id)a1 usingBlock:(id /* block */)a2;
- (id)eventsForDate:(id)a0;
- (BOOL)hasEventsFromStartDate:(id)a0 toEndDate:(id)a1;
- (void)_enumerateDaysFromStartDate:(id)a0 toEndDate:(id)a1 usingBlock:(id /* block */)a2;
- (id)_storeDayForDate:(id)a0 createIfNeeded:(BOOL)a1;

@end
