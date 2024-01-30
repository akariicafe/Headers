@class NSString;

@interface AMSRatingsCache : NSObject

@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) NSString *storeFront;

- (void).cxx_destruct;
- (id)cachePath;
- (id)cacheDirectory;
- (id)cacheTitle;
- (id)initWithMediaType:(unsigned long long)a0 storeFront:(id)a1;
- (BOOL)_hasCachedData;
- (void)clearCacheIfNeeded;
- (id)getCacheData;
- (BOOL)addCacheData:(id)a0;
- (id)initWithMediaType:(unsigned long long)a0;

@end
