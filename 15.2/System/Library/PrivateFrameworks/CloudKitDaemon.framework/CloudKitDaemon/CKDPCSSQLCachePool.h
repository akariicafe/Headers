@class NSMutableDictionary;

@interface CKDPCSSQLCachePool : NSObject

@property (retain, nonatomic) NSMutableDictionary *cachesByPath;
@property (retain, nonatomic) NSMutableDictionary *checkoutsByPath;

+ (id)sharedPool;

- (id)cacheForContainer:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (void)releaseCache:(id)a0 forContainer:(id)a1;

@end
