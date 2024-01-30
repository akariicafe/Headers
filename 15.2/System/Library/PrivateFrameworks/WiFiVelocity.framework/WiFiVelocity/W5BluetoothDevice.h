@class NSString;

@interface W5BluetoothDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *address;
@property (nonatomic) BOOL isPaired;
@property (nonatomic) BOOL isCloudPaired;
@property (nonatomic) BOOL isConnected;
@property (nonatomic) unsigned long long majorClass;
@property (nonatomic) unsigned long long minorClass;
@property (nonatomic) BOOL isLowEnergy;
@property (nonatomic) long long rssi;
@property (copy, nonatomic) NSString *afhMap;
@property (nonatomic) long long connectionMode;
@property (nonatomic) unsigned long long connectionModeInterval;
@property (nonatomic) long long manufacturer;
@property (nonatomic) unsigned long long lmpVersion;
@property (nonatomic) unsigned long long lmpSubversion;
@property (nonatomic) long long role;
@property (nonatomic) BOOL isAppleDevice;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqualToBluetoothDevice:(id)a0;

@end
