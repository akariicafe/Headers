@interface SUAutoDownloadPolicy : SUDefaultDownloadPolicy

- (id)initWithDescriptor:(id)a0;
- (BOOL)isDownloadAllowableForCellular;
- (BOOL)allowExpensiveNetwork;
- (BOOL)isPowerRequired;
- (unsigned long long)wifiOnlyPeriodInDays;
- (id)computAutoDownloadEndDateFromDate:(id)a0;
- (id)computeTimeOfWifiOnlyPeriodEndFromDate:(id)a0;

@end
