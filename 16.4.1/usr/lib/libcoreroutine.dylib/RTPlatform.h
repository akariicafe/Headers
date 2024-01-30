@interface RTPlatform : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)currentPlatform;
+ (BOOL)operatingSystemAtLeastVersion:(struct { long long x0; long long x1; long long x2; })a0;
+ (BOOL)operatingSystemNoGreaterThanVersion:(struct { long long x0; long long x1; long long x2; })a0;
+ (struct { long long x0; long long x1; long long x2; })operatingSystemVersionFromString:(id)a0;
+ (BOOL)version:(struct { long long x0; long long x1; long long x2; })a0 atLeastVersion:(struct { long long x0; long long x1; long long x2; })a1;
+ (BOOL)version:(struct { long long x0; long long x1; long long x2; })a0 equalToVersion:(struct { long long x0; long long x1; long long x2; })a1;
+ (BOOL)version:(struct { long long x0; long long x1; long long x2; })a0 noGreaterThanVersion:(struct { long long x0; long long x1; long long x2; })a1;

- (BOOL)supportsMultiUser;
- (BOOL)paired;
- (BOOL)iPhoneDevice;
- (BOOL)macOSPlatform;
- (id)deviceClass;
- (id)productType;
- (BOOL)supportsCoreRoutineCapability;
- (id)buildVersion;
- (id)systemModel;
- (id)serialNumber;
- (BOOL)lowEndHardware;
- (BOOL)isWatchPaired;
- (BOOL)internalInstall;
- (id)userAssignedDeviceName;
- (BOOL)supportsScenarioTriggers;
- (BOOL)iPhonePlatform;
- (BOOL)isTinkerPaired;
- (id)systemVersion;
- (BOOL)simulatorPlatform;
- (BOOL)watchPlatform;
- (BOOL)supportsPairedDevice;
- (unsigned long long)deviceMemorySize;
- (BOOL)usesTSCForClustering;

@end
