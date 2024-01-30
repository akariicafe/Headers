@interface NFGeneralStatisticsCALogger : NSObject

+ (void)_setupInitValuesForGeneralTransactionStatistics;
+ (void)postGeneralDeviceStatistics;
+ (void)_resetGeneralDeviceStatisticToDefaults;
+ (void)postAnalyticsGeneralTransactionStatistics;
+ (void)updateGeneralDeviceStatistic:(id)a0;
+ (void)updateAnalyticsGeneralTransactionStatistics:(id)a0;
+ (void)postAnalyticsSetupEndpoints:(unsigned int)a0 totalUnknowntoSE:(unsigned int)a1;

@end
