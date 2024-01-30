@interface DAAggDReporter : NSObject

+ (void)reportActiveExchangeOAuthAccountsCount;
+ (void)endDailyAggDReporter;
+ (void)startDailyAggDReporter;

@end
