@class NSString;

@interface PodcastsFoundation.ICContentFairPlayKeySession : _TtCs12_SwiftObject <PFFairPlayKeySession> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ keyStore;
    void /* unknown type, empty encoding */ requestContext;
    void /* unknown type, empty encoding */ keyCertificateURL;
    void /* unknown type, empty encoding */ urlConfiguration;
    void /* unknown type, empty encoding */ pendingProcessCompletion;
    void /* unknown type, empty encoding */ $__lazy_storage_$_delegateWrapper;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logPrefix;
    void /* unknown type, empty encoding */ $__lazy_storage_$_session;
}

@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ asset;
@property (nonatomic) void /* unknown type, empty encoding */ bypassCache;
@property (nonatomic, readonly) NSString *keyStoreFilePath;

- (void)processKeyWith:(id)a0 completion:(id /* block */)a1;
- (void)registerWithAsset:(id)a0;
- (void)stopAndInvalidateKeysWithCompletion:(id /* block */)a0;

@end
