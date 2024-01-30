@interface PFFairPlayKeyLoader : NSObject <PFFairPlayKeyLoading> {
    void /* unknown type, empty encoding */ metadataLoader;
    void /* unknown type, empty encoding */ fairPlayKeySessionProvider;
    void /* unknown type, empty encoding */ activeSessionStore;
    void /* unknown type, empty encoding */ internalQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logPrefix;
}

- (id)init;
- (void).cxx_destruct;
- (void)createSessionWithAsset:(id)a0 completion:(id /* block */)a1;
- (id)initWithMetadataLoader:(id)a0 fairPlayKeySessionProvider:(id)a1;
- (void)renewKeyRequestWithAsset:(id)a0 completion:(id /* block */)a1;
- (void)renewKeyRequestsWithAssets:(id)a0 completion:(id /* block */)a1;
- (void)startKeyRequestWithSession:(id)a0 completion:(id /* block */)a1;
- (void)stopKeyRequestWithAsset:(id)a0 completion:(id /* block */)a1;
- (void)stopKeyRequestWithSession:(id)a0 completion:(id /* block */)a1;

@end
