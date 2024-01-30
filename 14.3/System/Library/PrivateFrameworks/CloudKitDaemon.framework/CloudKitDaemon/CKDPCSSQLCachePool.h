@class NSMutableDictionary;

@interface CKDPCSSQLCachePool : NSObject

@property (retain, nonatomic) NSMutableDictionary *cachesByPath;
@property (retain, nonatomic) NSMutableDictionary *checkoutsByPath;

+ (id)sharedPool;

- (void).cxx_destruct;
- (void)releaseCache:(id)a0 forContext:(id)a1;
- (id)_init;
- (id)cacheForContext:(id)a0;

@end
