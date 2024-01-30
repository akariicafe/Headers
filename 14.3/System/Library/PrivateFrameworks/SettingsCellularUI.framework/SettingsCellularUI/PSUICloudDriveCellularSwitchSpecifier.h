@interface PSUICloudDriveCellularSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier

+ (id)accountStore;
+ (id)_appleAccount;
+ (BOOL)shouldShowCloudDrive;
+ (id)cloudDriveGroupSpecifier;

- (id)initDefault;
- (id)cellularUsagePolicy;
- (void)setCellularUsagePolicy:(id)a0;

@end
