@class HDProfile, HKCalendarCache;

@interface HKHRAFibBurdenSevenDayAnalysisModeDeterminer : NSObject {
    HDProfile *_profile;
    HKCalendarCache *_calendarCache;
}

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 calendarCache:(id)a1;
- (id)_mostRecentSampleEndDateDayIndexWithError:(id *)a0;
- (id)_onboardingDateDayIndexWithFeatureStatus:(id)a0 error:(id *)a1;
- (id)determineModeForAnalysisWeekRange:(struct { long long x0; long long x1; })a0 featureStatus:(id)a1 error:(id *)a2;

@end
