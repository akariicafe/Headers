@interface RTPlatform : NSObject

+ (id)currentPlatform;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)version:(struct { long long x0; long long x1; long long x2; })a0 equalToVersion:(struct { long long x0; long long x1; long long x2; })a1;
+ (BOOL)version:(struct { long long x0; long long x1; long long x2; })a0 noGreaterThanVersion:(struct { long long x0; long long x1; long long x2; })a1;
+ (BOOL)operatingSystemNoGreaterThanVersion:(struct { long long x0; long long x1; long long x2; })a0;
+ (BOOL)operatingSystemAtLeastVersion:(struct { long long x0; long long x1; long long x2; })a0;
+ (BOOL)version:(struct { long long x0; long long x1; long long x2; })a0 atLeastVersion:(struct { long long x0; long long x1; long long x2; })a1;
+ (struct { long long x0; long long x1; long long x2; })operatingSystemVersionFromString:(id)a0;

- (id)serialNumber;
- (id)systemVersion;
- (id)productType;
- (id)deviceClass;
- (BOOL)watchPlatform;
- (BOOL)internalInstall;
- (id)buildVersion;
- (BOOL)supportsMultiUser;
- (BOOL)lowEndHardware;
- (id)userAssignedDeviceName;
- (BOOL)iPhoneDevice;
- (BOOL)supportsCoreRoutineCapability;
- (BOOL)simulatorPlatform;
- (BOOL)macOSPlatform;
- (BOOL)supportsPairedDevice;
- (BOOL)isTinkerPaired;
- (BOOL)paired;
- (BOOL)iPhonePlatform;
- (id)systemModel;
- (BOOL)supportsScenarioTriggers;
- (BOOL)usesTSCForClustering;
- (unsigned long long)deviceMemorySize;

@end
