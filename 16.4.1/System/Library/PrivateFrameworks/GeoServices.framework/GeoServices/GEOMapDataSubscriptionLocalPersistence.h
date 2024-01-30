@class NSString, GEOTileDB;

@interface GEOMapDataSubscriptionLocalPersistence : NSObject <GEOMapDataSubscriptionPersistence> {
    GEOTileDB *_db;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTileDB:(id)a0;
- (void)addSubscriptionWithIdentifier:(id)a0 auditToken:(id)a1 dataTypes:(unsigned long long)a2 policy:(long long)a3 region:(id)a4 expirationDate:(id)a5 callbackQueue:(id)a6 completionHandler:(id /* block */)a7;
- (void)fetchSubscriptionsWithIdentifiers:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeSubscriptionWithIdentifier:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;

@end
