@class NSString, NSDate;
@protocol BCSXPCDaemonConnectionProtocol;

@interface BCSBusinessQueryService : NSObject {
    NSDate *_lastTimeoutDate;
    id<BCSXPCDaemonConnectionProtocol> _connection;
    NSString *_clientBundleIdentifier;
}

- (id)init;
- (void).cxx_destruct;
- (void)fetchBusinessItemWithDetailsForPhoneNumber:(id)a0 completion:(id /* block */)a1;
- (void)isBusinessRegisteredForPhoneNumber:(id)a0 completion:(id /* block */)a1;
- (void)warmCacheIfNecessaryForPhoneNumbers:(id)a0;
- (void)_deleteInMemoryCache;
- (void)_isBusinessRegisteredForURL:(id)a0 chopURL:(BOOL)a1 completion:(id /* block */)a2;
- (id)businessItemForPhoneNumber:(id)a0 isChatSuggestVisible:(BOOL *)a1 error:(id *)a2;
- (id)businessItemForPhoneNumber:(id)a0 isMessageable:(BOOL *)a1 isChatSuggestVisible:(BOOL *)a2 error:(id *)a3;
- (void)clearCachesForLinkItemsAssociatedWithBundleID:(id)a0 completion:(id /* block */)a1;
- (void)clearCachesForType:(long long)a0 completion:(id /* block */)a1;
- (void)clearExpiredCachesForType:(long long)a0 completion:(id /* block */)a1;
- (void)fetchBusinessItemForPhoneNumber:(id)a0 completion:(id /* block */)a1;
- (void)fetchBusinessItemWithPhoneNumber:(id)a0 completion:(id /* block */)a1;
- (void)fetchLinkItemWithHash:(id)a0 completion:(id /* block */)a1;
- (void)fetchLinkItemWithURL:(id)a0 chopURL:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchLinkItemWithURL:(id)a0 completion:(id /* block */)a1;
- (void)fetchSquareIconDataForBusinessItem:(id)a0 completion:(id /* block */)a1;
- (id)initWithConnection:(id)a0 clientBundleIdentifier:(id)a1;
- (void)isBusinessRegisteredForURL:(id)a0 chopURL:(BOOL)a1 completion:(id /* block */)a2;
- (void)isBusinessRegisteredForURL:(id)a0 completion:(id /* block */)a1;
- (void)prefetchBloomFilterAndConfigCacheWithCompletion:(id /* block */)a0;

@end
