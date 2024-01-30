@class NSString, NSDate;

@interface WFShortcutSigningCertificate : NSObject

@property (nonatomic) struct __SecCertificate { } *certificate;
@property (readonly, nonatomic) NSString *commonName;
@property (readonly, nonatomic) NSDate *expirationDate;

- (id)initWithCertificate:(struct __SecCertificate { } *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (struct __SecKey { } *)copyPublicKey;
- (id)generateAuthData;
- (id)initWithCertificateData:(id)a0;

@end
