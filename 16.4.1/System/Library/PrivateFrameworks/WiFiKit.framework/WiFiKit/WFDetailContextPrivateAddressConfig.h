@class NSString;

@interface WFDetailContextPrivateAddressConfig : NSObject

@property (nonatomic, getter=isRandomMACAddressDisabled) BOOL randomMACAddressDisabled;
@property (nonatomic, getter=isRandomMACSwitchOn) BOOL randomMACSwitchOn;
@property (copy, nonatomic) NSString *randomMACAddress;
@property (copy, nonatomic) NSString *hardwareMACAddress;
@property (nonatomic, getter=isConnectedWithHardwareAddress) BOOL connectedWithHardwareAddress;
@property (readonly, nonatomic, getter=isAlwaysDisplayRandomAddress) BOOL alwaysDisplayRandomAddress;

- (void).cxx_destruct;
- (id)initWithRandomMACAddress:(id)a0 hardwareMACAddress:(id)a1 randomMACSwitchOn:(BOOL)a2 randomMACAddressDisabled:(BOOL)a3 connectedWithHardwareAddress:(BOOL)a4;

@end
