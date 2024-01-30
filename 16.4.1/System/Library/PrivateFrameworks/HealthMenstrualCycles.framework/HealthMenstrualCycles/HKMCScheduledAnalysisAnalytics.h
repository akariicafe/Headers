@interface HKMCScheduledAnalysisAnalytics : NSObject

+ (BOOL)shouldSubmit;
+ (BOOL)_isAllowed;
+ (BOOL)_isMetricEnabled;
+ (void)submitMetricWithDateComponents:(id)a0;

@end
