@class NSData, SecKeyProxy;

@interface SecKeyProxyTarget : NSObject <SecKeyProxyProtocol> {
    id _key;
    NSData *_certificate;
    SecKeyProxy *_publicKeyProxy;
}

@property (readonly, nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *key;

- (void)initializeWithReply:(id /* block */)a0;
- (void).cxx_destruct;
- (void)getAlgorithmIDWithReply:(id /* block */)a0;
- (void)getAttributesWithReply:(id /* block */)a0;
- (void)getBlockSizeWithReply:(id /* block */)a0;
- (void)getDescriptionWithReply:(id /* block */)a0;
- (void)getExternalRepresentationWithReply:(id /* block */)a0;
- (void)getPublicKey:(id /* block */)a0;
- (id)initWithKey:(id)a0 certificate:(id)a1;
- (void)performOperation:(long long)a0 mode:(long long)a1 algorithm:(id)a2 parameters:(id)a3 reply:(id /* block */)a4;

@end
