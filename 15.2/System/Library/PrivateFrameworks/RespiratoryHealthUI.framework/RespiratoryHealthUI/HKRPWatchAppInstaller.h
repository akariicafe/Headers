@class NRDevice, HKWatchAppAvailability;
@protocol HKRPWatchInstallAppsProviding;

@interface HKRPWatchAppInstaller : NSObject {
    NRDevice *_device;
    HKWatchAppAvailability *_watchAppAvailability;
    id<HKRPWatchInstallAppsProviding> _installAppsProviding;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDevice:(id)a0 watchAppAvailability:(id)a1 installAppsProviding:(id)a2;
- (void)checkIfAppCanBeInstalledWithCompletion:(id /* block */)a0;
- (void)installAppWithCompletion:(id /* block */)a0;

@end
