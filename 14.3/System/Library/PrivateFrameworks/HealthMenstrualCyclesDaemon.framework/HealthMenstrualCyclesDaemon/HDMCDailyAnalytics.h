@class HDKeyValueDomain, HDProfile, HKMCAnalysis;

@interface HDMCDailyAnalytics : NSObject {
    HDProfile *_profile;
    HKMCAnalysis *_analysis;
    HDKeyValueDomain *_keyValueDomain;
}

+ (BOOL)shouldSubmit;

- (void).cxx_destruct;
- (BOOL)_collectDiagnosticFieldsForMetric:(id)a0 gregorianCalendar:(id)a1 error:(id *)a2;
- (BOOL)_collectSensitiveFieldsForMetric:(id)a0 gregorianCalendar:(id)a1 error:(id *)a2;
- (id)_weeksBetweenStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2;
- (id)_yearsBetweenStartDateComponents:(id)a0 endDate:(id)a1 calendar:(id)a2;
- (id)initWithProfile:(id)a0 analysis:(id)a1;
- (BOOL)submitMetricWithError:(id *)a0;

@end
