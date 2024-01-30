@class AVContentKeySession, NSArray, NSString, NSObject, NSMutableArray;
@protocol TVPContentKeyLoading;

@interface TVPContentKeySession : NSObject <AVContentKeySessionDelegate>

@property (retain, nonatomic) AVContentKeySession *contentKeySession;
@property (retain, nonatomic) NSObject<TVPContentKeyLoading> *contentKeyLoader;
@property (copy, nonatomic) id /* block */ offlineKeyGenerationCompletionHandler;
@property (retain, nonatomic) NSArray *offlineKeyIdentifiersInProgress;
@property (retain, nonatomic) NSMutableArray *keyRequestsInProgress;
@property (nonatomic) BOOL offlineKeyGenerationIsForRenewal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)contentKeySession:(id)a0 didProvidePersistableContentKeyRequest:(id)a1;
- (void)contentKeySession:(id)a0 didProvideContentKeyRequest:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)contentKeySession:(id)a0 didProvideRenewingContentKeyRequest:(id)a1;
- (void)contentKeySession:(id)a0 didUpdatePersistableContentKey:(id)a1 forContentKeyIdentifier:(id)a2;
- (void)generateOfflineKeyRequestsForIdentifiers:(id)a0 completion:(id /* block */)a1;
- (id)initWithContentKeyLoader:(id)a0 avAsset:(id)a1;
- (void)makeSecureInvalidationDataForOfflineKeyData:(id)a0 nonceData:(id)a1 completion:(id /* block */)a2;
- (void)_generateOfflineKeyRequestsForIdentifiers:(id)a0 isRenewal:(BOOL)a1 completion:(id /* block */)a2;
- (void)_finishOfflineKeyGeneration;
- (void)_loadAVContentKeyRequests:(id)a0 type:(long long)a1 isRenewal:(BOOL)a2;
- (void)_timeoutOfflineKeyRequestGeneration;
- (void)fetchOfflineKeysForParams:(id)a0 completion:(id /* block */)a1;
- (void)finishKeyRequest:(id)a0;

@end
