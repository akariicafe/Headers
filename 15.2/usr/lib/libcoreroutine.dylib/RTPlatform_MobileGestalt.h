@class NSUserDefaults, RTNanoRegistry;

@interface RTPlatform_MobileGestalt : RTPlatform {
    NSUserDefaults *_userDefaults;
    RTNanoRegistry *_nanoRegistry;
}

- (id)systemVersion;
- (id)productType;
- (id)deviceClass;
- (BOOL)watchPlatform;
- (BOOL)internalInstall;
- (BOOL)supportsMultiUser;
- (BOOL)lowEndHardware;
- (id)userAssignedDeviceName;
- (BOOL)iPhoneDevice;
- (id)initWithNanoRegistry:(id)a0 userDefaults:(id)a1;
- (BOOL)supportsCoreRoutineCapability;
- (void).cxx_destruct;
- (BOOL)simulatorPlatform;
- (id)init;
- (BOOL)macOSPlatform;
- (BOOL)isTinkerPaired;
- (BOOL)iPhonePlatform;
- (id)systemModel;
- (BOOL)supportsScenarioTriggers;

@end
