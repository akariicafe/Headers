@class NSData;

@interface AVContentKeyResponseClearKey : AVContentKeyResponse {
    NSData *_keyData;
    NSData *_initializationVector;
}

- (id)initWithKeyData:(id)a0 initializationVector:(id)a1;
- (void)dealloc;

@end
