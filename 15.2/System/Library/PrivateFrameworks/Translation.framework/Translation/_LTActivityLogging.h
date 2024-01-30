@class NSCalendar;

@interface _LTActivityLogging : NSObject {
    NSCalendar *_calendar;
}

- (void).cxx_destruct;
- (id)init;
- (id)_featureNameForTask:(long long)a0;
- (void)_logAllActivityFeature:(long long)a0 date:(id)a1;
- (void)_logDailyActivityFeature:(long long)a0 date:(id)a1;
- (void)_logWeeklyActivityFeature:(long long)a0 date:(id)a1;
- (void)_logMonthlyActivityFeature:(long long)a0 date:(id)a1;
- (void)registerActivity:(long long)a0;

@end
