@class NSString;
@protocol GEOPlaceDataProxy;

@interface GEOPlaceCardRequester : NSObject <GEOPlaceDataProxy> {
    id<GEOPlaceDataProxy> _proxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)useLocalProxy;
+ (void)useRemoteProxy;
+ (void)useProxy:(Class)a0;
+ (id)sharedRequester;

- (void)clearCache;
- (void)cancelRequest:(id)a0;
- (void)fetchAllCacheEntriesWithRequesterHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)requestPhoneNumbers:(id)a0 allowCellularDataForLookup:(BOOL)a1 traits:(id)a2 auditToken:(id)a3 throttleToken:(id)a4 requesterHandler:(id /* block */)a5;
- (void)requestComponentsFromNetwork:(id)a0 identifier:(id)a1 resultProviderID:(int)a2 traits:(id)a3 auditToken:(id)a4 throttleToken:(id)a5 requesterHandler:(id /* block */)a6;
- (void)requestIdentifiers:(id)a0 resultProviderID:(int)a1 traits:(id)a2 options:(unsigned long long)a3 auditToken:(id)a4 throttleToken:(id)a5 requesterHandler:(id /* block */)a6;
- (void)requestIdentifiers:(id)a0 resultProviderID:(int)a1 traits:(id)a2 options:(unsigned long long)a3 auditToken:(id)a4 throttleToken:(id)a5 networkActivity:(id /* block */)a6 requesterHandler:(id /* block */)a7;
- (void)performPlaceDataRequest:(id)a0 traits:(id)a1 cachePolicy:(unsigned long long)a2 timeout:(double)a3 auditToken:(id)a4 throttleToken:(id)a5 networkActivity:(id /* block */)a6 requesterHandler:(id /* block */)a7;
- (void)calculateFreeableSpaceWithHandler:(id /* block */)a0;
- (unsigned long long)shrinkBySizeSync:(unsigned long long)a0;
- (void)trackPlaceData:(id)a0;
- (void)shrinkBySize:(unsigned long long)a0 finished:(id /* block */)a1;
- (void)requestPhoneNumbers:(id)a0 allowCellularDataForLookup:(BOOL)a1 traits:(id)a2 auditToken:(id)a3 throttleToken:(id)a4 networkActivity:(id /* block */)a5 requesterHandler:(id /* block */)a6;
- (unsigned long long)calculateFreeableSpaceSync;

@end
