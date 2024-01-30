@class ACAccountStore;

@interface PSUICloudDriveCellularSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier {
    ACAccountStore *_accountStore;
}

+ (id)accountStore;

- (id)getLogger;
- (id)initDefault;
- (id)appleAccount;
- (void).cxx_destruct;
- (id)cellularUsagePolicy;
- (id)cloudDriveGroupSpecifier;
- (id)initWithAppleAccountStore:(id)a0;
- (void)setCellularUsagePolicy:(id)a0;
- (BOOL)shouldShowCloudDrive;

@end
