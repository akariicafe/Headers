@class NSString, NSNumber, CLLocation;

@interface PKPaymentDeviceMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSNumber *primaryJSBLSequenceCounter;
@property (copy, nonatomic) NSString *secureElementIdentifier;
@property (copy, nonatomic) NSString *uniqueDeviceIdentifier;
@property (copy, nonatomic) NSNumber *uniqueChipIdentifier;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *signedPhoneNumber;
@property (copy, nonatomic) NSString *signedPhoneNumberVersion;
@property (copy, nonatomic) CLLocation *location;
@property (readonly, weak, nonatomic) NSString *extensiveLatitude;
@property (readonly, weak, nonatomic) NSString *extensiveLongitude;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToPaymentDeviceMetadata:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
