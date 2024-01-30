@class CLSPublicEventCache;

@interface CLSPublicEventManager : NSObject

@property (readonly, nonatomic) CLSPublicEventCache *cache;
@property (nonatomic) double queryRadius;

+ (id)urlForEventsForCacheInvalidation;

- (void).cxx_destruct;
- (id)init;
- (id)publicEventsByTimeLocationTupleIdentifierForTimeLocationTuples:(id)a0 progressBlock:(id /* block */)a1;
- (void)saveEventsForCacheInvalidation:(id)a0;
- (id)loadInvalidationTokensAndInvalidateCachesIfNeeded;

@end
