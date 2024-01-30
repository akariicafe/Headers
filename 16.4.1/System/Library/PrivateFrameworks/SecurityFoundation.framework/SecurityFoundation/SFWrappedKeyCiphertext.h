@class _SFCiphertext;

@interface SFWrappedKeyCiphertext : _SFCiphertext {
    id _wrappedKeyCiphertextInternal;
}

@property (readonly) _SFCiphertext *ciphertextKey;

- (id)initWithCiphertext:(id)a0 ciphertextKey:(id)a1;
- (void).cxx_destruct;

@end
