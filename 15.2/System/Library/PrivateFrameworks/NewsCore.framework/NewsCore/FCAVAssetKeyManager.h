@class NSString, NFLazy, FCThreadSafeMutableArray;
@protocol FCAVAssetKeyServiceType, FCAVAssetKeyCacheType;

@interface FCAVAssetKeyManager : NSObject <AVContentKeySessionDelegate, FCAVAssetKeyManagerType> {
    id<FCAVAssetKeyServiceType> _service;
    id<FCAVAssetKeyCacheType> _cache;
    NFLazy *_sharedContentKeySession;
    FCThreadSafeMutableArray *_fetchRequests;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerAVURLAssetForAutomaticKeyManagement:(id)a0;
- (void)fetchKeysWithIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)contentKeySession:(id)a0 didProvidePersistableContentKeyRequest:(id)a1;
- (void)contentKeySession:(id)a0 didProvideContentKeyRequest:(id)a1;
- (void)refreshKeysIfNearExpiration:(id)a0 completionHandler:(id /* block */)a1;

@end
