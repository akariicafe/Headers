@interface WLAuthenticationCredentials : NSObject

@property (nonatomic) struct __SecKey { } *privateKey;
@property (nonatomic) struct __SecKey { } *publicKey;
@property (nonatomic) struct __SecCertificate { } *localCertificate;
@property (nonatomic) struct __SecCertificate { } *remoteCertificate;

+ (id)generateAuthenticationCredentialsContainingSelfSignedCertificate;

@end
