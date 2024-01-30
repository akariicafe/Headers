@class NSString;

@interface PSAppDataUsagePolicyTernaryControlSpecifier : PSAppCellularUsageSpecifier {
    BOOL _fullyInitialized;
}

@property (retain, nonatomic) NSString *displayName;

- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 displayName:(id)a1 statisticsCache:(id)a2;
- (id)cellularUsagePolicy;
- (void)setCellularUsagePolicy:(id)a0;
- (void)finishInitializing:(unsigned long long)a0;

@end
