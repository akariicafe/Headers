@class _SFAESKeySpecifier;

@interface SFAuthenticatedEncryptionOperation_Ivars : NSObject {
    _SFAESKeySpecifier *keySpecifier;
    long long authenticationMode;
    long long authenticationCodeLength;
}

- (void).cxx_destruct;

@end
