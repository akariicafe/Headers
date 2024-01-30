@class NSString;
@protocol ACCSSOTGTStoragePolicy;

@interface ACCTicketManager : NSObject <ACCTicketManagerProtocol>

@property (readonly, nonatomic) id<ACCSSOTGTStoragePolicy> tgtStoragePolicy;
@property (retain, nonatomic) Class ssoTokenClass;
@property (retain, nonatomic) Class authContextClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)clientID;
- (id)deviceIdentifier;
- (void)dealloc;
- (id)identifier;
- (id)setPublicKeyWithCertificate:(struct __SecCertificate { } *)a0 version:(id)a1 forRealm:(id)a2;
- (struct __SecKey { } *)publicKeyForRealm:(id)a0;
- (id)envelopeWithContext:(id)a0 publicKey:(struct __SecKey { } *)a1;
- (id)encryptionKeyWithRandomKey:(id)a0;
- (id)encryptSourceTokenWithSourceTokenData:(id)a0 encryptionKey:(id)a1 initializationVector:(id)a2;
- (id)tokenDataHMACForRandomKey:(id)a0 sourceTokenData:(id)a1;
- (id)envelopEncryptedSourceToken:(id)a0 dsKeyVersion:(id)a1 encryptedRandomKey:(id)a2 initializationVector:(id)a3 tokenDataHMAC:(id)a4 tokenVersion:(id)a5;
- (id)createNonceString;
- (void)updateContextEncryptionHash:(id)a0 withKeyCode:(id)a1;
- (id)prepareToken:(id)a0 withTGTInfo:(id)a1;
- (void)prepareTokenFor2SV:(id)a0 withVerificationCode:(id)a1 tgtInfo:(id)a2;
- (id)serviceTicketPrefix;
- (BOOL)hasValidPublicKeyForRealm:(id)a0;
- (BOOL)installCertificateWithString:(id)a0 version:(id)a1 forRealm:(id)a2;
- (void)uninstallPublicKeyForRealm:(id)a0;
- (id)envelopeWithContext:(id)a0;
- (id)authContextWithRequest:(id)a0;
- (id)authContextWithRequest:(id)a0 keyCode:(id)a1 authenticationType:(id)a2;
- (id)authContextWithRequest:(id)a0 sessionToken:(id)a1;
- (id)decryptEncryptedContent:(id)a0 withHmac:(id)a1 context:(id)a2;
- (id)createSSOTokenWithContent:(id)a0 context:(id)a1;
- (BOOL)storeSSOToken:(id)a0;
- (id)fetchSSOTokenForPrincipal:(id)a0;
- (id)fetchSSOTokenForPrincipal:(id)a0 agedLessThan:(double)a1;
- (id)changePasswordContextWithRequest:(id)a0 oldPassword:(id)a1 newPassword:(id)a2;
- (id)serviceTicketStringWithRequest:(id)a0 ssoToken:(id)a1;
- (void)updateContextWithClientSecretIfAny:(id)a0;
- (id)defaultPublicKeyVersionForRealm:(id)a0;
- (id)twoSVPersonIDForPrincipal:(id)a0;
- (id)twoSVSecretForPrincipal:(id)a0;
- (id)twoSVCreateDateForPrincipal:(id)a0;
- (void)tokenDidReceive2SVSecret:(id)a0;
- (id)tokenVersion;
- (id)cryptograph;
- (id)certificateStoragePolicy;
- (struct __SecCertificate { } *)certificateFromString:(id)a0;
- (struct __SecCertificate { } *)certificateForRealm:(id)a0;
- (struct __SecCertificate { } *)defaultPublicKeyCertificateForRealm:(id)a0;
- (id)certificateLabelForRealm:(id)a0;
- (id)publicKeyVersionForRealm:(id)a0;
- (void)setPublickKeyVersion:(id)a0 label:(id)a1 forRealm:(id)a2;

@end
