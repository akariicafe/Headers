@class DCContext;
@protocol DCCryptoProxy;

@interface DCDDeviceMetadata : NSObject {
    id<DCCryptoProxy> _cryptoProxy;
    DCContext *_context;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 cryptoProxy:(id)a1;
- (void)generateEncryptedBlobWithCompletion:(id /* block */)a0;

@end
