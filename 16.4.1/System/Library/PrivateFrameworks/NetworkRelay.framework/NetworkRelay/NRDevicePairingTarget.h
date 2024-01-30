@class NRDevicePairingProperties, NSData, NRDevicePairingCandidate, NRDeviceOperationalProperties;

@interface NRDevicePairingTarget : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NRDevicePairingCandidate *candidate;
@property (nonatomic) unsigned long long authMethod;
@property (copy, nonatomic) NSData *authData;
@property (copy, nonatomic) NRDevicePairingProperties *properties;
@property (copy, nonatomic) NRDeviceOperationalProperties *operationalProperties;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
