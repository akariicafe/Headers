@class KTApplicationPublicKeyStore, NSString;

@interface KTPatInclusionProofVerifier : NSObject

@property (readonly) KTApplicationPublicKeyStore *keyStore;
@property (retain) NSString *application;

- (id)initWithKeyStore:(id)a0 application:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)verifyPatInclusionProofWithPerAppLogEntry:(id)a0 topLevelTreeEntry:(id)a1 error:(id *)a2;

@end
