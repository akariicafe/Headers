@class NSString;

@interface ICCompatibilityControllerDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long notesVersion;
@property (nonatomic) unsigned long long maximumNotesVersion;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isUpgraded) BOOL upgraded;
@property (readonly, nonatomic, getter=isUpgradable) BOOL upgradable;

+ (unsigned long long)maximumNotesVersionForHardwareInfo:(struct ICDeviceHardwareInfo { unsigned long long x0; long long x1; long long x2; })a0;
+ (unsigned long long)notesVersionForDeviceInfo:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMigrationDeviceInfo:(id)a0;

@end
