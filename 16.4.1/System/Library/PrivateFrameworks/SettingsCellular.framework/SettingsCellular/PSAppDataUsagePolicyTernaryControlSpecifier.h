@class NSString;

@interface PSAppDataUsagePolicyTernaryControlSpecifier : PSAppCellularUsageSpecifier {
    BOOL _fullyInitialized;
}

@property (retain, nonatomic) NSString *displayName;

- (void)finishInitializing:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)cellularUsagePolicy;
- (id)initWithBundleID:(id)a0 displayName:(id)a1 statisticsCache:(id)a2;
- (void)setCellularUsagePolicy:(id)a0;

@end
