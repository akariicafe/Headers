@class KTApplicationPublicKeyStore, NSString;

@interface KTPatInclusionProofVerifier : NSObject

@property (readonly) KTApplicationPublicKeyStore *keyStore;
@property (retain) NSString *application;

- (void).cxx_destruct;
- (id)initWithKeyStore:(id)a0 application:(id)a1;
- (unsigned long long)verifyPatInclusionProofWithPerAppLogEntry:(id)a0 topLevelTreeEntry:(id)a1 error:(id *)a2;

@end
