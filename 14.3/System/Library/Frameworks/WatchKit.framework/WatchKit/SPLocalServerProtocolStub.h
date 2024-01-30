@class NSString;

@interface SPLocalServerProtocolStub : NSObject <SPLocalServerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)a0 completion:(id /* block */)a1;
- (void)setAlwaysInstall:(id)a0;
- (void)setLogLevel:(id)a0;
- (void)fetchInfoForApplicationWithBundleID:(id)a0 completion:(id /* block */)a1;
- (void)cancelPendingInstallations;
- (void)fetchApplicationWithContainingApplicationBundleID:(id)a0 completion:(id /* block */)a1;
- (void)fetchProvisioningProfilesWithCompletion:(id /* block */)a0;
- (void)updatePreferencesForApplicationWithIdentifier:(id)a0 preferences:(id)a1 completion:(id /* block */)a2;
- (void)removeProvisioningProfileWithID:(id)a0 completion:(id /* block */)a1;
- (void)getAlwaysInstallWithCompletion:(id /* block */)a0;
- (void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)a0 completion:(id /* block */)a1;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchInstalledApplicationsWithCompletion:(id /* block */)a0;
- (void)activeComplicationsWithCompletion:(id /* block */)a0;
- (void)launchSockPuppetAppForCompanionAppWithIdentifier:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)terminateSockPuppetAppForCompanionAppWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)getSockPuppetAppRunningStatusForCompanionAppWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)getCompanionExtensionPIDForCompanionAppWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)xcodeWillInstallSockPuppetAppWithCompanionAppIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)showUserNotification:(long long)a0 applicationName:(id)a1;
- (void)hideUserNotification;
- (void)wakeExtensionForWatchApp:(id)a0;
- (void)fetchInstalledComplicationsWithCompletion:(id /* block */)a0;
- (void)fetchInfoForApplicationWithContainingApplicationBundleID:(id)a0 completion:(id /* block */)a1;
- (void)installAllApplicationsForProcessWithIdentifier:(id)a0;
- (void)installApplicationWithIdentifier:(id)a0 installer:(id)a1 installerIsTestFlight:(BOOL)a2 completion:(id /* block */)a3;
- (void)installApplicationWithIdentifier:(id)a0 installer:(id)a1 withProvisioningProfiles:(id)a2 profileNames:(id)a3 completion:(id /* block */)a4;
- (void)removeApplicationWithIdentifier:(id)a0 installer:(id)a1 completion:(id /* block */)a2;
- (void)installProvisioningProfileWithName:(id)a0 profileData:(id)a1 completion:(id /* block */)a2;
- (void)setAlwaysInstall:(id)a0 forNRDeviceWithPairingID:(id)a1;

@end
