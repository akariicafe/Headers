@class KTApplicationPublicKeyStore, NSString;

@interface KTInclusionProofVerifier : NSObject

@property (readonly) KTApplicationPublicKeyStore *keyStore;
@property (retain) NSString *application;

- (void).cxx_destruct;
- (id)initWithKeyStore:(id)a0 application:(id)a1;
- (unsigned long long)verifyInclusionProofWithMapEntry:(id)a0 perAppLogEntry:(id)a1 topLevelTreeEntry:(id)a2 error:(id *)a3;
- (void)setInclusionVerifiedForMapHead:(id)a0;
- (unsigned long long)verifyPerApplicationTreeEntry:(id)a0 mapHead:(id)a1 topLevelTreeEntry:(id)a2 error:(id *)a3;

@end
