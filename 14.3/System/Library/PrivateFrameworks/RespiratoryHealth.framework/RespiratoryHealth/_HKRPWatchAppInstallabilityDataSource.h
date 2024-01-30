@class NRDevice, NSString, HKRPOxygenSaturationAvailability, HKRPOxygenSaturationOnboardingCache, NSUserDefaults;

@interface _HKRPWatchAppInstallabilityDataSource : NSObject <HKRPWatchAppInstallabilityDataSource> {
    NSUserDefaults *_userDefaults;
    HKRPOxygenSaturationAvailability *_availability;
    HKRPOxygenSaturationOnboardingCache *_onboardingCache;
    NRDevice *_device;
}

@property (readonly, nonatomic, getter=isBloodOxygenSaturationEnabled) BOOL bloodOxygenSaturationEnabled;
@property (readonly, nonatomic, getter=isRunningStoreDemoMode) BOOL runningStoreDemoMode;
@property (readonly, nonatomic, getter=isDeviceSupported) BOOL deviceSupported;
@property (readonly, nonatomic) BOOL shouldForceAppInstall;
@property (readonly, nonatomic) BOOL hasCompletedOnboarding;
@property (readonly, copy, nonatomic) NSString *selectedCountry;
@property (readonly, nonatomic, getter=isTinkerModeEnabled) BOOL tinkerModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
