@interface DAAggDReporter : NSObject

+ (void)reportActiveExchangeOAuthAccountsCount;
+ (void)startDailyAggDReporter;
+ (void)endDailyAggDReporter;

@end
