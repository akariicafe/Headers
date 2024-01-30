@class NSUserDefaults, NSXPCConnection;

@interface MFAACertificateManager : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSUserDefaults *userDefaults;

+ (id)sharedManager;
+ (BOOL)isMFi2_3Policy:(unsigned long long)a0;
+ (id)_anchorCertificatesDataForTypes:(int)a0;
+ (id)anchorCertificatesForTypes:(int)a0;
+ (BOOL)isBAAUserCertInfo:(id)a0;
+ (BOOL)isBAAUserPolicy:(unsigned long long)a0;
+ (BOOL)isComponentCertInfo:(id)a0;
+ (BOOL)isComponentPolicy:(unsigned long long)a0;
+ (BOOL)isMFi2_3CertInfo:(id)a0;

- (id)_init;
- (id)init;
- (void).cxx_destruct;
- (void)requestMetadataForCertificate:(id)a0 requestedLocale:(id)a1 requestInfo:(id)a2 completionHandler:(id /* block */)a3;
- (id)copyParsedCertificateChainInfo:(id)a0;
- (id)_getAnchorCertsForPolicy:(unsigned long long)a0;
- (int)_getCachedCertStatus:(id)a0 issuerSeq:(id)a1 ppid:(id)a2;
- (int)_validateBAACertificateChain:(id)a0 error:(id *)a1;
- (int)_validateCertificateChain:(id)a0 realtime:(BOOL)a1 error:(id *)a2;
- (int)_validateCertificateWithServer:(id)a0 issuerSeq:(id)a1 ppid:(id)a2 error:(id *)a3;
- (int)_validateX509CertificateChain:(id)a0 anchorCerts:(id)a1 error:(id *)a2;
- (int)authVersionFromCertificateChainInfo:(id)a0;
- (id)copyCertificateSerialNumber:(id)a0 authVer:(int)a1;
- (id)copyEvaluatedCertificateChainInfo:(id)a0;
- (id)copyLeafCertificateSerialNumber:(id)a0;
- (id)copyParsedCertificateChainInfo:(id)a0 assumeType:(int)a1;
- (id)createVeridianNonce:(id)a0 withChallenge:(id)a1;
- (void)validateCertificate:(id)a0 realtime:(BOOL)a1 completionHandler:(id /* block */)a2;
- (int)validateCertificate:(id)a0 realtime:(BOOL)a1 error:(id *)a2;
- (int)validateCertificateChain:(id)a0 realtime:(BOOL)a1 error:(id *)a2;
- (int)validateCertificateChain:(id)a0 type:(int)a1 realtime:(BOOL)a2 error:(id *)a3;
- (BOOL)verifyCertificateChainInfoSerialNumber:(id)a0;
- (BOOL)verifyCertificateSerialNumber:(id)a0 authVer:(int)a1;
- (BOOL)verifyCertificateSerialNumberBySerialNumber:(id)a0 authVer:(int)a1;
- (BOOL)verifyNonceSignature:(id)a0 nonce:(id)a1 signature:(id)a2;

@end
