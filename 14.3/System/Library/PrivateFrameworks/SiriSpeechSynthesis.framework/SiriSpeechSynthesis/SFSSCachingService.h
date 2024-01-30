@class NSCache;

@interface SFSSCachingService : NSObject

@property (retain, nonatomic) NSCache *memoryCache;

+ (id)sharedInstance;

- (id)objectForKey:(id)a0;
- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
