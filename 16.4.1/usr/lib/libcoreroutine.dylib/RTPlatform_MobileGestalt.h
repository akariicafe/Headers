@class NSUserDefaults, RTNanoRegistry;

@interface RTPlatform_MobileGestalt : RTPlatform {
    NSUserDefaults *_userDefaults;
    RTNanoRegistry *_nanoRegistry;
}

- (BOOL)supportsMultiUser;
- (BOOL)iPhoneDevice;
- (BOOL)macOSPlatform;
- (id)deviceClass;
- (id)initWithNanoRegistry:(id)a0 userDefaults:(id)a1;
- (id)productType;
- (BOOL)supportsCoreRoutineCapability;
- (id)systemModel;
- (BOOL)lowEndHardware;
- (BOOL)isWatchPaired;
- (BOOL)internalInstall;
- (id)userAssignedDeviceName;
- (BOOL)supportsScenarioTriggers;
- (BOOL)iPhonePlatform;
- (id)init;
- (BOOL)isTinkerPaired;
- (id)systemVersion;
- (BOOL)simulatorPlatform;
- (void).cxx_destruct;
- (BOOL)watchPlatform;

@end
