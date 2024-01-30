@class NSDictionary, TransparencySignatureVerifier;

@interface TransparencyTrustedKeyStore : NSObject

@property (retain) NSDictionary *trustedKeys;
@property (retain) TransparencySignatureVerifier *signatureVerifier;

- (void).cxx_destruct;
- (id)initWithTrustedKeys:(id)a0;

@end
