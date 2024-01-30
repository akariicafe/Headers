@interface VSAnalytics : NSObject

+ (void)reportEvent:(id)a0 payload:(id)a1;
+ (void)reportDownloadMetrics:(id)a0;
+ (void)reportInstrumentMetrics:(id)a0;

@end
