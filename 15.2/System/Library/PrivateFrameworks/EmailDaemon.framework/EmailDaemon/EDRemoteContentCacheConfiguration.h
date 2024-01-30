@class NSURL;

@interface EDRemoteContentCacheConfiguration : NSObject

@property (readonly, nonatomic) NSURL *cacheURL;
@property (readonly, nonatomic) unsigned long long diskCapacity;

- (void).cxx_destruct;
- (id)initWithBaseURL:(id)a0 diskCapacity:(unsigned long long)a1;
- (id)_cacheURLWithBaseURL:(id)a0;

@end
