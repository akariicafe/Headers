@class NSString, NetworkQualityExecutionsReporter, NetworkQualityConfiguration, NSMutableDictionary;

@interface CoreAnalyticsNetworkQualityReportImpl : NSObject <NetworkQualityReportImpl> {
    NetworkQualityExecutionsReporter *ctx;
    NetworkQualityConfiguration *config;
    NSString *eventName;
    NSMutableDictionary *dict;
}

- (void).cxx_destruct;
- (void)reportSummary:(id)a0;
- (void)startReportWithContext:(id)a0 withConfiguration:(id)a1;
- (void)visitLatencyTestResult:(id)a0 withLatencies:(id)a1;

@end
