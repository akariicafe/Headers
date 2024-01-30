@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNDonationAnalyticsLogger : NSObject <CNDonationAnalyticsLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log_t;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)analysisServiceCheckingIn;
- (void)analysisServiceCriteria:(id)a0;
- (void)noAnalyzerAvailable;
- (void)willStartAnalysis;
- (void)didPerformAnalysis;
- (void)willReportAnalytics;
- (void)didReportAnalytics;
- (void)didSkipDuplicateAnalysis:(id)a0;

@end
