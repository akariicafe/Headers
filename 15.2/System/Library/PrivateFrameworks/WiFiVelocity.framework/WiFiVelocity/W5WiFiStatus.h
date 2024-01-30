@class W5WiFiScanResult, NSString, W5WiFiChannel, NSData, NSArray, W5WiFiPreferredNetwork;

@interface W5WiFiStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *macAddress;
@property (copy, nonatomic) NSString *hardwareMACAddress;
@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) BOOL powerOn;
@property (copy, nonatomic) NSData *power;
@property (nonatomic) int opMode;
@property (copy, nonatomic) NSString *ssidString;
@property (copy, nonatomic) NSData *ssid;
@property (copy, nonatomic) NSString *bssid;
@property (nonatomic) long long rssi;
@property (nonatomic) long long noise;
@property (nonatomic) double txRate;
@property (nonatomic) long long security;
@property (nonatomic) unsigned int eapolControlMode;
@property (nonatomic) unsigned int eapolSupplicantState;
@property (nonatomic) int phyMode;
@property (nonatomic) unsigned long long mcsIndex;
@property (nonatomic) unsigned long long guardInterval;
@property (nonatomic) unsigned long long numberOfSpacialStreams;
@property (copy, nonatomic) W5WiFiChannel *channel;
@property (copy, nonatomic) NSArray *linkQualityUpdates;
@property (copy, nonatomic) NSArray *supportedChannels;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *networkServiceID;
@property (nonatomic) long long ipv4ConfigMethod;
@property (nonatomic) long long ipv6ConfigMethod;
@property (copy, nonatomic) NSArray *ipv4Addresses;
@property (copy, nonatomic) NSArray *ipv6Addresses;
@property (copy, nonatomic) NSString *ipv4RouterAddress;
@property (copy, nonatomic) NSString *ipv6RouterAddress;
@property (copy, nonatomic) NSArray *dnsAddresses;
@property (nonatomic) int btcMode;
@property (copy, nonatomic) NSData *chainAck;
@property (copy, nonatomic) NSData *txChainPower;
@property (copy, nonatomic) NSData *desense;
@property (copy, nonatomic) NSData *desenseLevel;
@property (copy, nonatomic) NSData *btcConfig;
@property (copy, nonatomic) NSData *btcProfiles2GHz;
@property (copy, nonatomic) NSData *btcProfiles5GHz;
@property (copy, nonatomic) W5WiFiScanResult *lastJoinedScanResult;
@property (copy, nonatomic) W5WiFiPreferredNetwork *lastJoinedPreferredNetwork;
@property (copy, nonatomic) NSArray *cachedScanResults;
@property (nonatomic) BOOL smartCCADesenseSupported;
@property (nonatomic) BOOL smartCCADesenseUSBPresence;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqualToWiFiStatus:(id)a0;

@end
