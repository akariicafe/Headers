@class NSData, _SFECPublicKey;

@interface SFIESCiphertext_Ivars : NSObject {
    _SFECPublicKey *ephemeralSenderPublicKey;
    NSData *authenticationCode;
}

- (void).cxx_destruct;

@end
