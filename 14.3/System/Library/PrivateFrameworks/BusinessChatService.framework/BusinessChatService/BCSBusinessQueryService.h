@class NSString, NSObject, NSDate;
@protocol BCSXPCDaemonConnectionProtocol, OS_dispatch_queue;

@interface BCSBusinessQueryService : NSObject

@property (readonly, nonatomic) id<BCSXPCDaemonConnectionProtocol> connection;
@property (readonly, copy, nonatomic) NSString *clientBundleIdentifier;
@property (retain) NSDate *lastTimeoutDate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue;

- (id)init;
- (void).cxx_destruct;
- (void)warmCacheIfNecessaryForPhoneNumbers:(id)a0;
- (id)businessItemForPhoneNumber:(id)a0 isMessageable:(BOOL *)a1 isChatSuggestVisible:(BOOL *)a2 error:(id *)a3;
- (void)fetchLinkItemWithURL:(id)a0 completion:(id /* block */)a1;
- (void)isBusinessRegisteredForURL:(id)a0 completion:(id /* block */)a1;
- (void)fetchLinkItemWithHash:(id)a0 completion:(id /* block */)a1;
- (void)clearCachesForLinkItemsAssociatedWithBundleID:(id)a0 completion:(id /* block */)a1;
- (id)initWithConnection:(id)a0 clientBundleIdentifier:(id)a1;
- (void)_fetchBusinessItemWithDetailsForPhoneNumber:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchLinkItemWithURL:(id)a0 chopURL:(BOOL)a1 completion:(id /* block */)a2;
- (void)isBusinessRegisteredForURL:(id)a0 chopURL:(BOOL)a1 completion:(id /* block */)a2;
- (void)clearCachesForType:(long long)a0 completion:(id /* block */)a1;
- (void)clearExpiredCachesForType:(long long)a0 completion:(id /* block */)a1;
- (void)_deleteInMemoryCache;
- (void)fetchBusinessItemWithPhoneNumber:(id)a0 completion:(id /* block */)a1;
- (void)fetchBusinessItemWithDetailsForPhoneNumber:(id)a0 completion:(id /* block */)a1;
- (void)fetchBusinessItemWithBizID:(id)a0 completion:(id /* block */)a1;
- (void)fetchIsBusinessPhoneNumber:(id)a0 completion:(id /* block */)a1;
- (void)fetchSquareIconDataForBusinessItem:(id)a0 completion:(id /* block */)a1;
- (void)_isBusinessRegisteredForURL:(id)a0 chopURL:(BOOL)a1 completion:(id /* block */)a2;
- (void)prefetchBloomFilterAndConfigCacheWithCompletion:(id /* block */)a0;
- (void)prefetchConfigCacheWithCompletion:(id /* block */)a0;

@end
