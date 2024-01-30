@class GEOMapItemStorage, NSString, PPConnectionsCriteria, PPConnectionsStore, PPLocationStore, NSObject, PPNamedEntityStore, NSNumber;
@protocol OS_dispatch_queue, MapsSuggestionsPortraitConnector, MapsSuggestionsNetworkRequester;

@interface MapsSuggestionsPortrait : NSObject <MapsSuggestionsObject> {
    id<MapsSuggestionsPortraitConnector> _connector;
    id<MapsSuggestionsNetworkRequester> _networkRequester;
    PPLocationStore *_locationStore;
    PPConnectionsStore *_connectionsStore;
    PPNamedEntityStore *_namedEntityStore;
    PPConnectionsCriteria *_criteria;
    NSString *_cachedKey;
    GEOMapItemStorage *_cachedMapItem;
    NSNumber *_cachedMapItemOrigin;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPortraitConnector:(id)a0 networkRequester:(id)a1;
- (BOOL)fetchLocationEntriesForTray:(BOOL)a0 currentLocation:(id)a1 queue:(id)a2 handler:(id /* block */)a3;
- (void)sendFeedbackforClientID:(id)a0 storeType:(long long)a1 explicitlyEngagedStrings:(id)a2 explicitlyRejectedStrings:(id)a3 implicitlyEngagedStrings:(id)a4 implicitlyRejectedStrings:(id)a5;
- (BOOL)fetchConnectionEntriesWithHandler:(id /* block */)a0;
- (id)fetchNamedEntitiesFromDate:(id)a0;
- (id)initFromResourceDepot:(id)a0;

@end
