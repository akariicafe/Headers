@class SigningPublicKey, NGMPublicPreKey;

@interface NGMPublicDeviceIdentity : NSObject

@property (retain, nonatomic) SigningPublicKey *signingKey;
@property (retain, nonatomic) NGMPublicPreKey *prekey;

+ (id)identityWithIdentityData:(id)a0 prekeyData:(id)a1 error:(id *)a2;

- (id)prekeyData;
- (id)initWithPrekey:(id)a0 signingKey:(id)a1;
- (BOOL)verifySignature:(id)a0 formatter:(id)a1;
- (BOOL)isValidSigningDestination;
- (id)identityData;
- (BOOL)isValidSignature:(id)a0 forMessage:(id)a1 forType:(long long)a2 error:(id *)a3;
- (id)sealMessage:(id)a0 signedByFullIdentity:(id)a1 error:(id *)a2;
- (id)sealMessage:(id)a0 withEncryptedAttributes:(id)a1 signedByFullIdentity:(id)a2 error:(id *)a3;
- (id)description;
- (void).cxx_destruct;

@end
