@class NFLazy, FCThreadSafeMutableArray, NSString;
@protocol FCAVAssetKeyServiceType, FCAVAssetKeyCacheType;

@interface FCAVAssetKeyManager : NSObject <AVContentKeySessionDelegate, FCAVAssetKeyManagerType>

@property (readonly, nonatomic) id<FCAVAssetKeyServiceType> service;
@property (readonly, nonatomic) id<FCAVAssetKeyCacheType> cache;
@property (readonly, nonatomic) NFLazy *sharedContentKeySession;
@property (readonly, nonatomic) FCThreadSafeMutableArray *fetchRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)refreshKeysIfNearExpiration:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithService:(id)a0 cache:(id)a1;
- (void)fetchKeysWithIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerAVURLAssetForAutomaticKeyManagement:(id)a0;
- (id)_keyURIForKeyIdentifier:(id)a0;
- (void)contentKeySession:(id)a0 didProvideContentKeyRequest:(id)a1;
- (BOOL)_waitingOnRefreshForKeyURI:(id)a0;
- (BOOL)_shouldRefreshKey:(id)a0;
- (void)contentKeySession:(id)a0 didProvidePersistableContentKeyRequest:(id)a1;
- (void)_completeKeyRequest:(id)a0 withData:(id)a1 error:(id)a2;

@end
