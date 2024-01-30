@interface DAAnalyticsReporter : NSObject

+ (void)reportActiveExchangeOAuthAccountsCount;
+ (void)startDailyAnalyticsReporter;
+ (void)endDailyAnalyticsReporter;

@end
