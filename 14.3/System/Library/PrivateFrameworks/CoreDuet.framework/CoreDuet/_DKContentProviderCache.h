@class NSCache;

@interface _DKContentProviderCache : NSObject

@property (retain, nonatomic) NSCache *cache;

- (id)init;
- (void).cxx_destruct;
- (id)contentProviderForEventStream:(id)a0 error:(id *)a1;

@end
