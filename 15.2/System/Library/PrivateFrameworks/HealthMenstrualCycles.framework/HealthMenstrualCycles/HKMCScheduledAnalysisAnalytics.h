@interface HKMCScheduledAnalysisAnalytics : NSObject

+ (BOOL)_isAllowed;
+ (BOOL)_isMetricEnabled;
+ (BOOL)shouldSubmit;
+ (void)submitMetricWithDateComponents:(id)a0;

@end
