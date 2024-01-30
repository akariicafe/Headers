@class HMCameraClipManager, NSArray, NSMutableDictionary, NSHashTable, NSDate;

@interface HUCalendarScrubberDataSource : NSObject

@property (retain, nonatomic) NSArray *dates;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSHashTable *changeObservers;
@property (weak, nonatomic) HMCameraClipManager *clipManager;
@property (retain, nonatomic) NSMutableDictionary *datesContainingClips;

- (void)addChangeObserver:(id)a0;
- (void)removeChangeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeEvents:(id)a0;
- (void)_updateDateBoundariesIfNeeded;
- (id)dateAtIndexPath:(id)a0;
- (long long)dayOfMonthForItemAtIndexPath:(id)a0;
- (id)dayOfWeekForItemAtIndexPath:(id)a0;
- (BOOL)eventExistsForItemAtIndexPath:(id)a0;
- (BOOL)eventExistsOnDate:(id)a0;
- (id)indexPathForDate:(id)a0;
- (id)initWithCameraClipManager:(id)a0;
- (void)loadDatesContainingClips;
- (void)reloadDates;
- (id)shortMonthNameForItemAtIndexPath:(id)a0;
- (unsigned long long)totalNumberOfWeeks;
- (void)updateEvents:(id)a0;

@end
