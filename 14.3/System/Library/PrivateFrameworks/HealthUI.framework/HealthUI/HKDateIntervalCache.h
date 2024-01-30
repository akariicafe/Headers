@class NSArray, NSCalendar, NSDateComponents, NSDate, HKValueRange;

@interface HKDateIntervalCache : NSObject {
    NSDate *_minAnchorDate;
    NSDate *_maxAnchorDate;
    double _previousTimeInterval;
    BOOL _datesInvalidated;
    NSArray *_cachedDates;
    NSCalendar *_currentCalendarOverride;
}

@property (nonatomic) unsigned long long dateAnchorUnit;
@property (retain, nonatomic) NSDateComponents *referenceSpacingComponents;
@property (retain, nonatomic) NSDateComponents *dateSpacingComponents;
@property (retain, nonatomic) NSDateComponents *minorDateSpacingComponents;
@property (readonly, nonatomic) HKValueRange *dateRange;
@property (readonly, nonatomic) NSArray *datePoints;

- (id)_currentCalendar;
- (id)init;
- (void).cxx_destruct;
- (BOOL)setDateRange:(id)a0;
- (void)_updateAnchorDates;
- (void)_invalidateCachedDates;
- (id)_minAnchorDateFromDate:(id)a0;
- (id)_maxAnchorDateFromDate:(id)a0;
- (id)_generateCachedDates;
- (unsigned long long)_minimumCalendarUnitForComponents:(id)a0;
- (id)_nextDateForDate:(id)a0 components:(id)a1 calendar:(id)a2;
- (id)_firstDateAfter:(id)a0 matchingComponents:(id)a1 calendar:(id)a2;
- (void)_setCurrentCalendar:(id)a0;

@end
