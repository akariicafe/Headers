@class Logger, MBManager;

@interface PSUICloudBackupCellularSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier {
    Logger *_logger;
    MBManager *_backupManager;
}

+ (id)_appleAccount;
+ (id)_accountStore;
+ (BOOL)_backupOnCellularCarrierBundleKeyEnabledCarrierBundleCache:(id)a0 context:(id)a1;
+ (BOOL)shouldShowCloudBackupCarrierBundleCache:(id)a0 context:(id)a1 capabilitiesCache:(id)a2;
+ (id)cloudBackupGroupSpecifier;

- (id)getLogger;
- (void).cxx_destruct;
- (id)init;
- (id)cellularUsagePolicy;
- (void)setCellularUsagePolicy:(id)a0;

@end
