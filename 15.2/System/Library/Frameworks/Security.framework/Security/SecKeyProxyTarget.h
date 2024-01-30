@class NSData, SecKeyProxy;

@interface SecKeyProxyTarget : NSObject <SecKeyProxyProtocol> {
    id _key;
    NSData *_certificate;
    SecKeyProxy *_publicKeyProxy;
}

@property (readonly, nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *key;

- (void).cxx_destruct;
- (void)initializeWithReply:(id /* block */)a0;
- (void)getBlockSizeWithReply:(id /* block */)a0;
- (void)getAttributesWithReply:(id /* block */)a0;
- (void)getDescriptionWithReply:(id /* block */)a0;
- (void)getExternalRepresentationWithReply:(id /* block */)a0;
- (void)getAlgorithmIDWithReply:(id /* block */)a0;
- (void)getPublicKey:(id /* block */)a0;
- (id)initWithKey:(id)a0 certificate:(id)a1;
- (void)performOperation:(long long)a0 algorithm:(id)a1 parameters:(id)a2 reply:(id /* block */)a3;

@end
