@interface AMSSubscriptionEntitlementsTask : AMSTask

@property (nonatomic) long long cachePolicy;
@property (nonatomic) BOOL extendedCarrierCheck;
@property (nonatomic) long long mediaType;

+ (id)updateCacheForMediaType:(long long)a0 account:(id)a1 data:(id)a2;
+ (unsigned long long)_segmentForMediaType:(long long)a0 error:(id *)a1;

- (BOOL)_shouldIgnoreCaches;
- (id)_reloadASDSubscriptionForSegment:(unsigned long long)a0 controller:(id)a1;
- (id)performExternalLookup;
- (id)_resultFromASDEntitlements:(id)a0;
- (id)_resultFromICResponse:(id)a0;
- (BOOL)_shouldIgnoreRemoteData;
- (id)initWithMediaType:(long long)a0;
- (id)_queryCachedASDSubscriptionForSegment:(unsigned long long)a0 controller:(id)a1 reloadIfNeeded:(BOOL)a2;
- (id)_fetchEntitlementsFromASD;
- (id)_fetchEntitlementsFromIC;

@end
