@class ACAccount;

@interface FAFamilyCircleCache : NSObject

@property (readonly, nonatomic) ACAccount *account;

+ (id)cacheQueue;

- (id)load:(id *)a0;
- (id)initWithAccount:(id)a0;
- (BOOL)_isCacheDate:(id)a0 withinDuration:(double)a1;
- (id)_onQueue:(id /* block */)a0;
- (id)_cacheDataWithFamilyCircle:(id)a0 serverTag:(id)a1;
- (id)load;
- (id)_cacheURL;
- (id)_fetchData:(id *)a0;
- (id)_username;
- (id)invalidate;
- (id)_cacheURLWithError:(id *)a0;
- (id)_createCacheFile;
- (id)updateWithFamilyCircle:(id)a0 serverTag:(id)a1;
- (void).cxx_destruct;

@end
