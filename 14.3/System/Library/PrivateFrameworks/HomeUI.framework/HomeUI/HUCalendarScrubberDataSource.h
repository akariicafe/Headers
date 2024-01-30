@class NSArray, NSHashTable, NSDate;

@interface HUCalendarScrubberDataSource : NSObject

@property (retain, nonatomic) NSArray *dates;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSHashTable *changeObservers;

- (id)init;
- (void).cxx_destruct;
- (void)removeChangeObserver:(id)a0;
- (void)addChangeObserver:(id)a0;
- (unsigned long long)totalNumberOfWeeks;
- (long long)dayOfMonthForItemAtIndexPath:(id)a0;
- (id)shortMonthNameForItemAtIndexPath:(id)a0;
- (id)dayOfWeekForItemAtIndexPath:(id)a0;
- (BOOL)eventExistsForItemAtIndexPath:(id)a0;
- (id)initWithDates:(id)a0;
- (id)indexPathForDate:(id)a0;
- (id)dateAtIndexPath:(id)a0;
- (void)reloadWithDates:(id)a0;
- (void)_updateDateBoundariesIfNeeded;
- (BOOL)eventExistsOnDate:(id)a0;

@end
