@class NSString;

@interface AMSRatingsCache : NSObject

@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) NSString *storeFront;

- (id)cacheDirectory;
- (id)getCacheData;
- (id)cacheTitle;
- (BOOL)_hasCachedData;
- (void)clearCacheIfNeeded;
- (BOOL)addCacheData:(id)a0;
- (id)initWithMediaType:(unsigned long long)a0 storeFront:(id)a1;
- (void).cxx_destruct;
- (id)initWithMediaType:(unsigned long long)a0;
- (id)cachePath;

@end
