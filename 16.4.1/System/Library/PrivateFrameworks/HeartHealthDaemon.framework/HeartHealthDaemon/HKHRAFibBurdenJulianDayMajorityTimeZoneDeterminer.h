@class HKCalendarCache, HDProfile, HKSeriesType;

@interface HKHRAFibBurdenJulianDayMajorityTimeZoneDeterminer : NSObject {
    HDProfile *_profile;
    HKSeriesType *_seriesType;
    HKCalendarCache *_calendarCache;
}

- (id)_totalDatePredicateForStartDayIndex:(long long)a0 endDayIndex:(long long)a1;
- (id)determineJulianDayToMajorityTimeZoneForRange:(struct { long long x0; long long x1; })a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 calendarCache:(id)a1;

@end
