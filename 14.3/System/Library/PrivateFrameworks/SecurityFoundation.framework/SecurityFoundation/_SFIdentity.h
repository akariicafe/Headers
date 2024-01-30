@class _SFPublicKey, _SFCertificate, SFIdentityAttributes, _SFKeyPair;

@interface _SFIdentity : NSObject {
    id _identityInternal;
}

@property (retain, nonatomic) _SFCertificate *certificate;
@property (readonly, nonatomic) _SFPublicKey *publicKey;
@property (retain, nonatomic) _SFKeyPair *keyPair;
@property (readonly, nonatomic) SFIdentityAttributes *attributes;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPublicKey:(id)a0 certificate:(id)a1;
- (id)initWithKeyPair:(id)a0 certificate:(id)a1;
- (id)initWithPublicKey:(id)a0;
- (id)initWithKeyPair:(id)a0;

@end
