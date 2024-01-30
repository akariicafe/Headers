@class _SFCiphertext;

@interface SFWrappedKeyCiphertext : _SFCiphertext {
    id _wrappedKeyCiphertextInternal;
}

@property (readonly) _SFCiphertext *ciphertextKey;

- (void).cxx_destruct;
- (id)initWithCiphertext:(id)a0 ciphertextKey:(id)a1;

@end
