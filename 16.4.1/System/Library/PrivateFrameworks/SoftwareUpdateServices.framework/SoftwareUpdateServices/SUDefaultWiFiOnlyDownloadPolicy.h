@interface SUDefaultWiFiOnlyDownloadPolicy : SUDefaultDownloadPolicy

+ (unsigned long long)wifiOnlyPeriodInDaysForUpdate:(id)a0;

- (id)initWithDescriptor:(id)a0;
- (BOOL)allowExpensiveNetwork;
- (BOOL)isDownloadAllowableForCellular;

@end
