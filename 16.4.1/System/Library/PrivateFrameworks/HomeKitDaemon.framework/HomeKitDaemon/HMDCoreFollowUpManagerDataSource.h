@interface HMDCoreFollowUpManagerDataSource : NSObject <HMDCoreFollowUpManagerDataSource>

- (BOOL)currentDeviceIsAnAppleTV;
- (BOOL)currentDeviceSupportsDeviceSetup;
- (id)followUpActionForDeviceSetupManager:(id)a0;
- (id)followUpControllerForDeviceSetupManager:(id)a0;
- (id)followUpItemForDeviceSetupManager:(id)a0;
- (id)followUpPreferencesBundleIdentifierForDeviceSetupManager:(id)a0;

@end
