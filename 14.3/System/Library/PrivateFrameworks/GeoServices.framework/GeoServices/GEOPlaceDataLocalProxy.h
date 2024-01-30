@class NSObject, NSString, NSMapTable, NSMutableOrderedSet, _GEOPlaceDataPendingRequestManager, GEOPDPlaceCache, geo_reentrant_isolater;
@protocol OS_dispatch_source;

@interface GEOPlaceDataLocalProxy : NSObject <GEOPlaceDataProxy> {
    geo_reentrant_isolater *_accessIsolater;
    NSMapTable *_pendingRequests;
    NSMutableOrderedSet *_recentlySeenPlaceHashes;
    _GEOPlaceDataPendingRequestManager *_pendingRequestManager;
    GEOPDPlaceCache *_pdPlaceCache;
    NSObject<OS_dispatch_source> *_requestTimeoutTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearCache;
- (void)cancelRequest:(id)a0;
- (void)fetchAllCacheEntriesWithRequesterHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)requestPhoneNumbers:(id)a0 allowCellularDataForLookup:(BOOL)a1 traits:(id)a2 auditToken:(id)a3 throttleToken:(id)a4 requesterHandler:(id /* block */)a5;
- (void)requestComponentsFromNetwork:(id)a0 identifier:(id)a1 resultProviderID:(int)a2 traits:(id)a3 auditToken:(id)a4 throttleToken:(id)a5 requesterHandler:(id /* block */)a6;
- (void)dealloc;
- (void)requestIdentifiers:(id)a0 resultProviderID:(int)a1 traits:(id)a2 options:(unsigned long long)a3 auditToken:(id)a4 throttleToken:(id)a5 requesterHandler:(id /* block */)a6;
- (void)startRequest:(id)a0 traits:(id)a1 timeout:(double)a2 auditToken:(id)a3 throttleToken:(id)a4 finished:(id /* block */)a5 networkActivity:(id /* block */)a6 error:(id /* block */)a7;
- (void)performPlaceDataRequest:(id)a0 traits:(id)a1 cachePolicy:(unsigned long long)a2 timeout:(double)a3 auditToken:(id)a4 throttleToken:(id)a5 networkActivity:(id /* block */)a6 requesterHandler:(id /* block */)a7;
- (void)_privacyAndLocationSettingsResetObserver:(id)a0;
- (void)_cleanupPendingRequestMananger;
- (void)_requestIdentifiersFromNetwork:(id)a0 resultProviderID:(int)a1 traits:(id)a2 auditToken:(id)a3 throttleToken:(id)a4 finished:(id /* block */)a5 error:(id /* block */)a6;
- (void)calculateFreeableSpaceWithHandler:(id /* block */)a0;
- (unsigned long long)shrinkBySizeSync:(unsigned long long)a0;
- (void)trackPlaceData:(id)a0;
- (void)shrinkBySize:(unsigned long long)a0 finished:(id /* block */)a1;
- (void)_resetRequestTimeout;
- (void)_callHistoryRecentsClearedObserver:(id)a0;
- (unsigned long long)calculateFreeableSpaceSync;

@end
