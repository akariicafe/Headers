@class NSString, NSArray;
@protocol ACNotifyReading;

@interface ACNotifyAccountCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _notifyAccountCacheLock;
    NSArray *_cachedAccounts;
}

@property (retain, nonatomic) NSString *key;
@property (retain) id<ACNotifyReading> reader;

+ (id)cacheKeyForSuffix:(id)a0;
+ (unsigned long long)generationForAccounts:(id)a0;
+ (id)suffixForAccountsForAccountType:(id)a0 fetchOptions:(unsigned long long)a1;

- (unsigned long long)generation;
- (void)clearCachedAccounts;
- (id)cachedAccounts;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0;
- (void)_lock_clearCcachedAccounts;
- (void)cacheAccounts:(id)a0;
- (id)initWithKey:(id)a0 reader:(id)a1;

@end
