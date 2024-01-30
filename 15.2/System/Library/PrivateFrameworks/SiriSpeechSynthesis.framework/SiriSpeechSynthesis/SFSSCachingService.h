@class NSCache;

@interface SFSSCachingService : NSObject

@property (retain, nonatomic) NSCache *memoryCache;

+ (id)sharedInstance;

- (void)clear;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0;

@end
