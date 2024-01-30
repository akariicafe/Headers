@class HMCameraClipManager, NSArray, NSMutableDictionary, NSHashTable, NSDate;

@interface HUCalendarScrubberDataSource : NSObject

@property (retain, nonatomic) NSArray *dates;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSHashTable *changeObservers;
@property (weak, nonatomic) HMCameraClipManager *clipManager;
@property (retain, nonatomic) NSMutableDictionary *datesContainingClips;

- (void)removeEvents:(id)a0;
- (void)addChangeObserver:(id)a0;
- (void).cxx_destruct;
- (void)removeChangeObserver:(id)a0;
- (id)init;
- (unsigned long long)totalNumberOfWeeks;
- (long long)dayOfMonthForItemAtIndexPath:(id)a0;
- (id)shortMonthNameForItemAtIndexPath:(id)a0;
- (id)dayOfWeekForItemAtIndexPath:(id)a0;
- (BOOL)eventExistsForItemAtIndexPath:(id)a0;
- (id)initWithCameraClipManager:(id)a0;
- (id)indexPathForDate:(id)a0;
- (id)dateAtIndexPath:(id)a0;
- (void)updateEvents:(id)a0;
- (void)loadDatesContainingClips;
- (void)_updateDateBoundariesIfNeeded;
- (BOOL)eventExistsOnDate:(id)a0;
- (void)reloadDates;

@end
