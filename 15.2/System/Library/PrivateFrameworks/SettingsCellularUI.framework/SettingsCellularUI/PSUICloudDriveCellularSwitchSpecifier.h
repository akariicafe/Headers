@interface PSUICloudDriveCellularSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier

+ (id)_appleAccount;
+ (id)accountStore;
+ (BOOL)shouldShowCloudDrive;
+ (id)cloudDriveGroupSpecifier;

- (id)initDefault;
- (id)cellularUsagePolicy;
- (void)setCellularUsagePolicy:(id)a0;

@end
