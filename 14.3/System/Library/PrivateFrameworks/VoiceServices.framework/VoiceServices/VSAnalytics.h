@interface VSAnalytics : NSObject

+ (void)reportInstrumentMetrics:(id)a0;
+ (void)reportDownloadMetrics:(id)a0;
+ (void)reportEvent:(id)a0 payload:(id)a1;

@end
