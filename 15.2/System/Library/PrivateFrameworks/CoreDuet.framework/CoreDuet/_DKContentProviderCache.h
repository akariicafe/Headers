@class NSCache;

@interface _DKContentProviderCache : NSObject

@property (retain, nonatomic) NSCache *cache;

- (void).cxx_destruct;
- (id)init;
- (id)contentProviderForEventStream:(id)a0 error:(id *)a1;

@end
