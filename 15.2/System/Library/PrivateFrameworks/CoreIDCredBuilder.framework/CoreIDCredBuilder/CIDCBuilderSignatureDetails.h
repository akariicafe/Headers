@class NSArray, NSData;

@interface CIDCBuilderSignatureDetails : NSObject

@property long long signingAlgorithm;
@property (retain) NSArray *issuerCertificate;
@property (retain) NSData *issuerKey;
@property (retain) NSData *signature;

- (void).cxx_destruct;
- (id)initWithSigningAlgorithm:(long long)a0 issuerKey:(id)a1 signature:(id)a2;
- (id)initWithSigningAlgorithm:(long long)a0 issuerCertificate:(id)a1 issuerKey:(id)a2 signature:(id)a3;
- (id)initWithSigningAlgorithm:(long long)a0 issuerCertificate:(id)a1 signature:(id)a2;

@end
