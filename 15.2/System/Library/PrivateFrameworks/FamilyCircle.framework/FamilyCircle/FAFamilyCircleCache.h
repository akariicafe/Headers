@class ACAccount;

@interface FAFamilyCircleCache : NSObject

@property (readonly, nonatomic) ACAccount *account;

+ (id)cacheQueue;

- (id)_username;
- (id)initWithAccount:(id)a0;
- (id)load:(id *)a0;
- (id)_fetchData:(id *)a0;
- (id)_onQueue:(id /* block */)a0;
- (id)_createCacheFile;
- (id)_cacheURLWithError:(id *)a0;
- (id)_cacheDataWithFamilyCircle:(id)a0;
- (BOOL)_isCacheDate:(id)a0 withinDuration:(double)a1;
- (id)updateWithFamilyCircle:(id)a0;
- (void).cxx_destruct;
- (id)_cacheURL;
- (id)invalidate;
- (id)load;

@end
