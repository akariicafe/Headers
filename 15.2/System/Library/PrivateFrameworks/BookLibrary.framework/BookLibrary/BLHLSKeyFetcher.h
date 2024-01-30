@interface BLHLSKeyFetcher : NSObject

@property (class, readonly, nonatomic) BLHLSKeyFetcher *sharedInstance;

@property (nonatomic) BOOL ignoreCache;

- (id)init;
- (id)fetchOnlineKeyForMediaItem:(id)a0 loadingRequest:(id)a1;
- (id)fetchOfflineKeyForMediaItem:(id)a0 identity:(id)a1 completion:(id /* block */)a2;

@end
