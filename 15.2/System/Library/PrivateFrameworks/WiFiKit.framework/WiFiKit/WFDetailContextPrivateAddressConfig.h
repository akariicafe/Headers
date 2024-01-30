@class NSString;

@interface WFDetailContextPrivateAddressConfig : NSObject

@property (nonatomic, getter=isRandomMACAddressDisabled) BOOL randomMACAddressDisabled;
@property (nonatomic, getter=isRandomMACAddressConfigurable) BOOL randomMACAddressConfigurable;
@property (nonatomic, getter=isRandomMACFeatureEnabled) BOOL randomMACFeatureEnabled;
@property (nonatomic, getter=isRandomMACSwitchOn) BOOL randomMACSwitchOn;
@property (copy, nonatomic) NSString *randomMACAddress;
@property (copy, nonatomic) NSString *hardwareMACAddress;
@property (nonatomic, getter=isEnabledForSecuredNetworks) BOOL enabledForSecuredNetworks;
@property (nonatomic, getter=isConnectedWithHardwareAddress) BOOL connectedWithHardwareAddress;
@property (readonly, nonatomic, getter=isAlwaysDisplayRandomAddress) BOOL alwaysDisplayRandomAddress;

- (void).cxx_destruct;
- (id)initWithRandomMACAddress:(id)a0 hardwareMACAddress:(id)a1 randomMACSwitchOn:(BOOL)a2 randomMACFeatureEnabled:(BOOL)a3 randomMACAddressConfigurable:(BOOL)a4 enabledForSecureNetworks:(BOOL)a5 randomMACAddressDisabled:(BOOL)a6 connectedWithHardwareAddress:(BOOL)a7;

@end
