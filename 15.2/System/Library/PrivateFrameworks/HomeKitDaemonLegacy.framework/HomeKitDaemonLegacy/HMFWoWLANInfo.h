@class NSData, NSArray, NSString;

@interface HMFWoWLANInfo : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *primaryMACAddress;
@property (readonly, nonatomic) NSArray *additionalMACAddresses;
@property (readonly, nonatomic) BOOL supportsSleepConfig;
@property (readonly, nonatomic) unsigned short wakePort;
@property (retain, nonatomic) NSData *wakeAddress;
@property (readonly, nonatomic) long long wakeType;
@property (readonly, nonatomic) long long wakePacketType;
@property (readonly, nonatomic) unsigned char version;
@property (retain, nonatomic) NSData *wakePattern;
@property (readonly, nonatomic) NSString *wakeAddressString;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithWakeVersion:(unsigned char)a0 wakePort:(unsigned short)a1 wakeAddress:(id)a2 wakeType:(long long)a3 wakePacketType:(long long)a4 wakePattern:(id)a5;
- (id)initWithPrimaryIdentifier:(id)a0 wifiIdentifiers:(id)a1;

@end
