@class geo_isolater, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface GEOPlaceCardRequester : NSObject {
    NSObject<OS_dispatch_queue> *_requestQ;
    geo_isolater *_isolater;
    NSMutableDictionary *_pendingRequestConnections;
}

+ (id)sharedRequester;

- (id)requestIdentifiers:(id)a0 resultProviderID:(int)a1 traits:(id)a2 options:(unsigned long long)a3 auditToken:(id)a4 throttleToken:(id)a5 networkActivity:(id /* block */)a6 requesterHandler:(id /* block */)a7;
- (id)requestPhoneNumbers:(id)a0 allowCellularDataForLookup:(BOOL)a1 traits:(id)a2 auditToken:(id)a3 throttleToken:(id)a4 networkActivity:(id /* block */)a5 requesterHandler:(id /* block */)a6;
- (void)calculateFreeableSpaceWithHandler:(id /* block */)a0;
- (void)clearCache;
- (void)cancelRequest:(id)a0;
- (void)fetchAllCacheEntriesWithRequesterHandler:(id /* block */)a0;
- (id)performPlaceDataRequest:(id)a0 traits:(id)a1 cachePolicy:(unsigned long long)a2 timeout:(double)a3 auditToken:(id)a4 throttleToken:(id)a5 networkActivity:(id /* block */)a6 requesterHandler:(id /* block */)a7;
- (void)shrinkBySize:(unsigned long long)a0 finished:(id /* block */)a1;
- (id)init;
- (void)trackPlaceData:(id)a0;
- (void).cxx_destruct;
- (id)_takeConnectionForRequestUUID:(id)a0;
- (id)_createServerConnection:(id)a0;
- (unsigned long long)calculateFreeableSpaceSync;
- (unsigned long long)shrinkBySizeSync:(unsigned long long)a0;

@end
