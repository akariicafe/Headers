@class NSString, NSDictionary, NSData, NSArray, W5WiFiChannel;

@interface W5WiFiScanResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *scanRecord;
@property (copy, nonatomic) NSData *ssid;
@property (copy, nonatomic) NSString *ssidString;
@property (copy, nonatomic) NSString *bssid;
@property (copy, nonatomic) NSArray *supportedSecurityTypes;
@property (nonatomic) int supportedPHYModes;
@property (nonatomic) long long rssi;
@property (nonatomic) long long noise;
@property (nonatomic) BOOL isIBSS;
@property (copy, nonatomic) NSString *countryCode;
@property (nonatomic) long long beaconInterval;
@property (nonatomic) BOOL isPasspoint;
@property (nonatomic) BOOL isPersonalHotspot;
@property (nonatomic) BOOL isAppleSWAP;
@property (copy, nonatomic) NSString *airPortBaseStationModelName;
@property (copy, nonatomic) W5WiFiChannel *channel;
@property (nonatomic) BOOL supportsWEPCipher;
@property (nonatomic) BOOL supportsTKIPCipher;

- (int)fastestSupportedPHYMode;
- (void)encodeWithCoder:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isAirPortBaseStation:(out id *)a0 modelID:(out char *)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)supportsPHYMode:(int)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (BOOL)supportsSecurity:(long long)a0;
- (BOOL)isEqualToScanResult:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (long long)strongestSupportedSecurity;

@end
