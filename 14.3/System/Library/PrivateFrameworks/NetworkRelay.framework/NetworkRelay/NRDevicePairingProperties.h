@class NSData;

@interface NRDevicePairingProperties : NRDeviceProperties

@property (retain, nonatomic) NSData *outOfBandKey;
@property (nonatomic) BOOL wasInitiallySetupUsingIDSPairing;
@property (nonatomic) BOOL pairWithSPPLink;
@property (nonatomic) BOOL isAltAccountPairing;
@property (retain, nonatomic) NSData *bluetoothMACAddress;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
