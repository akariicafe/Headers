@class NSString;

@interface DeviceIdentitySignature : NSObject

@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *leafCertificate;
@property (copy, nonatomic) NSString *intermediateCertificate;

- (void).cxx_destruct;
- (id)description;

@end
