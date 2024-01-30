@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AMSAccountStoreCache : NSObject

@property (class, readonly, nonatomic) NSMutableDictionary *cache;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheAccessQueue;

+ (id)accountStoreForMediaType:(id)a0;
+ (id)mediaTypeForAccountStore:(id)a0;
+ (void)_resetAccountStoreCache;

@end
