@class AVContentKeySpecifier;

@interface AVContentKey : NSObject {
    struct OpaqueFigCPECryptor { } *_cryptor;
}

@property (readonly) AVContentKeySpecifier *contentKeySpecifier;

+ (id)contentKeyWithSpecifier:(id)a0 andCryptor:(struct OpaqueFigCPECryptor { } *)a1;

- (struct OpaqueFigCPECryptor { } *)getCryptor;
- (id)initWithSpecifier:(id)a0 andCryptor:(struct OpaqueFigCPECryptor { } *)a1;
- (void)dealloc;

@end
