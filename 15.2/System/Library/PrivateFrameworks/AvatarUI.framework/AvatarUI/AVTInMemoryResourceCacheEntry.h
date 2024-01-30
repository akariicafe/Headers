@class NSString;
@protocol AVTCachedResource, AVTCacheableResourceChangeToken;

@interface AVTInMemoryResourceCacheEntry : NSObject

@property (readonly, nonatomic) id<AVTCachedResource> resource;
@property (readonly, nonatomic) id<AVTCacheableResourceChangeToken> changeToken;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) unsigned long long cost;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithResource:(id)a0 changeToken:(id)a1 key:(id)a2 cost:(unsigned long long)a3;

@end
