@class AMSThreadSafeDictionary;

@interface AMSAccountStoreCache : NSObject

@property (class, readonly, nonatomic) AMSThreadSafeDictionary *cache;

+ (void)_resetAccountStoreCache;
+ (id)accountStoreForMediaType:(id)a0;
+ (id)mediaTypeForAccountStore:(id)a0;

@end
