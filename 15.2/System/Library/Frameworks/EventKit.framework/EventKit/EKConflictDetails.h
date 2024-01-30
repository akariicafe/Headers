@class NSArray, CalDateRange;

@interface EKConflictDetails : NSObject

@property (retain) NSArray *conflictingDates;
@property (retain) NSArray *conflictingEvents;
@property (retain) NSArray *needsActionEvents;
@property unsigned long long totalOccurrencesInSeries;
@property unsigned long long totalConflictsInSeries;
@property unsigned long long totalConflictingEvents;
@property unsigned long long totalNeedsActionEvents;
@property (retain) CalDateRange *conflictPeriodForSeries;

+ (double)_maxRangeLengthForRule:(id)a0;
+ (id)_dateRangeToScanForConflictsForEvent:(id)a0 dateForNow:(id)a1;
+ (id)dateRangeToScanForConflictsForEvent:(id)a0;
+ (id)calendarIdentifiersToScanForConflictsForEvent:(id)a0;
+ (id)infoWithConflicts:(long long)a0 needsAction:(long long)a1 event:(id)a2;
+ (id)infoWithConflictsInSeries:(long long)a0 outOf:(long long)a1 withPeriod:(id)a2 conflictingDates:(id)a3;

- (id)description;
- (id)initWithConflictingDates:(id)a0 conflictingEvents:(id)a1 needsActionEvents:(id)a2 totalOccurrencesInSeries:(unsigned long long)a3 conflictPeriodForSeries:(id)a4;
- (void).cxx_destruct;

@end
