@class NSString, NSDictionary, NSData;

@interface PKPeerPaymentDeviceRegistrationData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *signedAuthToken;
@property (copy, nonatomic) NSDictionary *enrollmentData;
@property (copy, nonatomic) NSData *signedEnrollmentDataSignature;
@property (nonatomic) BOOL devSigned;
@property (copy, nonatomic) NSString *companionSerialNumber;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToPeerPaymentDeviceRegistrationData:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
