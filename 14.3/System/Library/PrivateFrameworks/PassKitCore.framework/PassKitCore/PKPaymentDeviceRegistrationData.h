@class NSString, NSDictionary, NSArray, NSData;

@interface PKPaymentDeviceRegistrationData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *signedAuthToken;
@property (copy, nonatomic) NSDictionary *secureElementStateInformation;
@property (copy, nonatomic) NSString *secureElementIdentifier;
@property (copy, nonatomic) NSString *deviceSerialNumber;
@property (copy, nonatomic) NSArray *additionalDeviceSerialNumbers;
@property (copy, nonatomic) NSString *companionSerialNumber;
@property (copy, nonatomic) NSString *productType;
@property (copy, nonatomic) NSData *platformData;
@property (copy, nonatomic) NSData *platformDataSignature;
@property (nonatomic) BOOL devSigned;
@property (readonly, nonatomic) NSArray *legacyStateInformation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
