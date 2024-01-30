@interface RTPlatform : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)currentPlatform;
+ (BOOL)version:(struct { long long x0; long long x1; long long x2; })a0 equalToVersion:(struct { long long x0; long long x1; long long x2; })a1;
+ (BOOL)version:(struct { long long x0; long long x1; long long x2; })a0 noGreaterThanVersion:(struct { long long x0; long long x1; long long x2; })a1;
+ (BOOL)operatingSystemNoGreaterThanVersion:(struct { long long x0; long long x1; long long x2; })a0;
+ (BOOL)operatingSystemAtLeastVersion:(struct { long long x0; long long x1; long long x2; })a0;
+ (BOOL)version:(struct { long long x0; long long x1; long long x2; })a0 atLeastVersion:(struct { long long x0; long long x1; long long x2; })a1;
+ (struct { long long x0; long long x1; long long x2; })operatingSystemVersionFromString:(id)a0;

- (BOOL)paired;
- (BOOL)lowEndHardware;
- (id)productType;
- (id)serialNumber;
- (id)deviceClass;
- (id)systemVersion;
- (BOOL)supportsPairedDevice;
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
- (id)buildVersion;
- (BOOL)usesTSCForClustering;
- (unsigned long long)deviceMemorySize;

@end
