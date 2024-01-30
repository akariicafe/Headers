@class NSNumber, NSString, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface WLKSportsFavoriteCache : NSObject <WLKSportsFavoriteCaching> {
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_userDefaults;
    NSNumber *_DSID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getFavoritesWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_dsid;
- (id)_cacheLastModifiedKeyForAccount;
- (id)_cacheKeyForAccount;
- (id)_dsidKey;
- (id)_syncSettingKeyForAccount;
- (id)_syncSettingLastModifiedKeyForAccount;
- (void)addFavorites:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasCache;
- (void)hasFavoritesSyncEnabledKey:(id /* block */)a0;
- (id)initWithUserDefaults:(id)a0 DSID:(id)a1;
- (void)isOptedIn:(id /* block */)a0;
- (void)removeFavorites:(id)a0 completion:(id /* block */)a1;
- (void)setCache:(id)a0 completion:(id /* block */)a1;
- (void)setOptInStatus:(BOOL)a0 completion:(id /* block */)a1;

@end
