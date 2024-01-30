@class NSString, NSData;

@interface HAPAccessoryWiFiConfiguration : HAPAccessoryConfiguration

@property (readonly, nonatomic) NSString *ssid;
@property (readonly, nonatomic) NSData *psk;
@property (readonly, nonatomic) NSString *isoCountryCode;

+ (id)accessoryConfigurationWithSsid:(id)a0 psk:(id)a1 country:(id)a2;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSSID:(id)a0 psk:(id)a1 country:(id)a2;

@end
