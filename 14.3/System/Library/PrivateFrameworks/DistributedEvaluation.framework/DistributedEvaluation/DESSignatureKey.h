@interface DESSignatureKey : NSObject {
    struct __SecKey { } *_key;
}

+ (void)initialize;
+ (id)keyFromData:(id)a0;
+ (struct __SecKey { } *)keyFromCertificateChain:(id)a0;

- (id)init;
- (void)dealloc;
- (id)initWithKey:(struct __SecKey { } *)a0;
- (BOOL)validateBase64Signature:(id)a0 data:(id)a1;
- (BOOL)validateBase64Signature:(id)a0 data:(id)a1 algorithm:(struct __CFString { } *)a2;
- (BOOL)validateSignature:(id)a0 data:(id)a1 algorithm:(struct __CFString { } *)a2;

@end
