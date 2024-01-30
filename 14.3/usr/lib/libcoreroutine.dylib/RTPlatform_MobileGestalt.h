@class NSUserDefaults, RTNanoRegistry;

@interface RTPlatform_MobileGestalt : RTPlatform {
    NSUserDefaults *_userDefaults;
    RTNanoRegistry *_nanoRegistry;
}

- (BOOL)lowEndHardware;
- (id)init;
- (id)productType;
- (id)deviceClass;
- (void).cxx_destruct;
- (id)systemVersion;
- (BOOL)isTinkerPaired;
- (BOOL)supportsCoreRoutineCapability;
- (id)systemModel;
- (id)userAssignedDeviceName;
- (BOOL)watchPlatform;
- (BOOL)supportsMultiUser;
- (BOOL)simulatorPlatform;
- (BOOL)internalInstall;
- (BOOL)iPhoneDevice;
- (BOOL)iPhonePlatform;
- (BOOL)macOSPlatform;
- (BOOL)supportsScenarioTriggers;
- (id)initWithNanoRegistry:(id)a0 userDefaults:(id)a1;

@end
