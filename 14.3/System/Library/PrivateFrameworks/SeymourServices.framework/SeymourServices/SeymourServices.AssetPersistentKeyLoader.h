@interface SeymourServices.AssetPersistentKeyLoader : NSObject <AVContentKeySessionDelegate> {
    void /* unknown type, empty encoding */ assetDataStore;
    void /* unknown type, empty encoding */ assetFileStore;
    void /* unknown type, empty encoding */ assetMediaStreamKeyProvider;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ keyProvider;
    void /* unknown type, empty encoding */ tasks;
    void /* unknown type, empty encoding */ persistenceStore;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ keyLoaderQueue;
}

- (void)contentKeySession:(id)a0 didProvideContentKeyRequest:(id)a1;
- (void)contentKeySession:(id)a0 didProvidePersistableContentKeyRequest:(id)a1;
- (void)contentKeySession:(id)a0 contentKeyRequest:(id)a1 didFailWithError:(id)a2;
- (BOOL)contentKeySession:(id)a0 shouldRetryContentKeyRequest:(id)a1 reason:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
