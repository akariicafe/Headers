@class NSURL, NSString, NSData;

@interface PKPeerPaymentWebServiceContext : PKWebServiceContext

@property (readonly, copy, nonatomic) NSURL *serviceURL;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, copy, nonatomic) NSString *pushTopic;
@property (copy, nonatomic) NSString *pushToken;
@property (nonatomic) BOOL devSigned;
@property (readonly, copy, nonatomic) NSString *companionSerialNumber;
@property (copy, nonatomic) NSData *signedEnrollmentDataSignature;

+ (id)contextWithArchive:(id)a0;
+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateContextWithDeviceRegistrationData:(id)a0 registrationResponse:(id)a1;
- (void).cxx_destruct;

@end
