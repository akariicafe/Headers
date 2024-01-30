@class NSObject;
@protocol OS_dispatch_queue;

@interface GEOPlaceCardRequester : NSObject {
    NSObject<OS_dispatch_queue> *_requestQ;
}

+ (id)sharedRequester;

- (void)clearCache;
- (void)cancelRequest:(id)a0;
- (unsigned long long)calculateFreeableSpaceSync;
- (id)performPlaceDataRequest:(id)a0 traits:(id)a1 cachePolicy:(unsigned long long)a2 timeout:(double)a3 auditToken:(id)a4 throttleToken:(id)a5 networkActivity:(id /* block */)a6 requesterHandler:(id /* block */)a7;
- (unsigned long long)shrinkBySizeSync:(unsigned long long)a0;
- (void)trackPlaceData:(id)a0;
- (void)shrinkBySize:(unsigned long long)a0 finished:(id /* block */)a1;
- (id)_createServerConnection;
- (void).cxx_destruct;
- (id)init;
- (void)fetchAllCacheEntriesWithRequesterHandler:(id /* block */)a0;
- (id)requestPhoneNumbers:(id)a0 allowCellularDataForLookup:(BOOL)a1 traits:(id)a2 auditToken:(id)a3 throttleToken:(id)a4 networkActivity:(id /* block */)a5 requesterHandler:(id /* block */)a6;
- (id)requestIdentifiers:(id)a0 resultProviderID:(int)a1 traits:(id)a2 options:(unsigned long long)a3 auditToken:(id)a4 throttleToken:(id)a5 networkActivity:(id /* block */)a6 requesterHandler:(id /* block */)a7;
- (void)calculateFreeableSpaceWithHandler:(id /* block */)a0;

@end
