@interface DAAnalyticsReporter : NSObject

+ (void)startDailyAnalyticsReporter;
+ (void)endDailyAnalyticsReporter;
+ (void)reportActiveExchangeOAuthAccountsCount;

@end
