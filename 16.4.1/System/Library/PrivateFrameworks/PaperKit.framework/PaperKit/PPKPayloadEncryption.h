@interface PPKPayloadEncryption : NSObject {
    BOOL _keyInitialized;
    BOOL _haveKey;
    unsigned char _key[16];
}

- (id)init;
- (void)initializeKey;

@end
