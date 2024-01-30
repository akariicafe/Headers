@interface PSAppDataUsagePolicySwitchSpecifier : PSAppCellularUsageSpecifier

- (id)initWithBundleID:(id)a0 displayName:(id)a1 statisticsCache:(id)a2;
- (id)cellularUsagePolicy;
- (void)setCellularUsagePolicy:(id)a0;
- (void)setShouldShowUsage:(BOOL)a0;

@end
