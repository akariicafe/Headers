@class NSString;

@interface ICFullDeviceInfo : ICMigrationDeviceInfo

@property (readonly, nonatomic) struct ICDeviceHardwareInfo { unsigned long long modelName; long long version; long long subVersion; } hardwareInfo;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *modelDisplayName;
@property (readonly, nonatomic) NSString *softwareVersion;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)upgradedToIOS13;
- (struct ICDeviceHardwareInfo { unsigned long long x0; long long x1; long long x2; })hardwareInfoFromModelId:(id)a0;
- (unsigned long long)hardwareInfoNameFromString:(id)a0;
- (id)initWithName:(id)a0 model:(id)a1 modelDisplayName:(id)a2 softwareVersion:(id)a3;
- (BOOL)isHardwareInfoUpgradable:(struct ICDeviceHardwareInfo { unsigned long long x0; long long x1; long long x2; })a0;
- (BOOL)isHardwareInfoUpgradableToIOS13:(struct ICDeviceHardwareInfo { unsigned long long x0; long long x1; long long x2; })a0;
- (BOOL)isHardwareInfoUpgradableToMacOS11:(struct ICDeviceHardwareInfo { unsigned long long x0; long long x1; long long x2; })a0;
- (BOOL)isIOSDevice;
- (BOOL)isOSXDevice;
- (id)loggableDescription;
- (BOOL)shouldBeHidden;
- (BOOL)upgradable;
- (BOOL)upgradableToIOS13;
- (BOOL)upgradableToIOS14orMacOS11;
- (BOOL)upgraded;
- (BOOL)upgradedToIOS14EorMacOS11E;
- (BOOL)upgradedToMajor:(int)a0 minor:(int)a1;

@end
