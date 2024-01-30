@class DCContext;
@protocol DCCryptoProxy;

@interface DCDDeviceMetadata : NSObject {
    id<DCCryptoProxy> _cryptoProxy;
    DCContext *_context;
}

- (void).cxx_destruct;
- (void)baaSignatureForData:(id)a0 completion:(id /* block */)a1;
- (void)baaSignaturesForData:(id)a0 completion:(id /* block */)a1;
- (void)generateEncryptedBlobWithCompletion:(id /* block */)a0;
- (id)initWithContext:(id)a0 cryptoProxy:(id)a1;

@end
