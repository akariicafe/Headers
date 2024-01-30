@class NSData;

@interface AVContentKeyResponseClearKey : AVContentKeyResponse {
    NSData *_keyData;
    NSData *_initializationVector;
}

- (void)dealloc;
- (id)initWithKeyData:(id)a0 initializationVector:(id)a1;

@end
