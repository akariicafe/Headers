@class _SFPublicKey, _SFCertificate, SFIdentityAttributes, _SFKeyPair;

@interface SFIdentity_Ivars : NSObject {
    _SFPublicKey *publicKey;
    _SFKeyPair *keyPair;
    _SFCertificate *certificate;
    SFIdentityAttributes *attributes;
}

- (void).cxx_destruct;

@end
