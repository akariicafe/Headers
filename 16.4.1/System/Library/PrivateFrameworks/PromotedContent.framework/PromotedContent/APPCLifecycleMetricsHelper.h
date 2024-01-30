@interface APPCLifecycleMetricsHelper : NSObject <APPCLifecycleMetricsHelping> {
    void /* unknown type, empty encoding */ metricsHelper;
    void /* unknown type, empty encoding */ placeholder;
    void /* unknown type, empty encoding */ wasOnScreen;
}

- (void)manuallyDiscardWithReason:(long long)a0;
- (void)missedOpportunity;
- (void)trackImpressionWithStartDate:(id)a0 endDate:(id)a1;
- (void)discarded;
- (id)init;
- (void)contentLoadFailure;
- (void).cxx_destruct;

@end
