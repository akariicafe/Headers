@class PPNamedEntityStore, NSString, PPLocationStore, PPConnectionsStore;

@interface MapsSuggestionsRealPortraitConnector : NSObject <MapsSuggestionsPortraitConnector> {
    PPLocationStore *_locationStore;
    PPConnectionsStore *_connectionsStore;
    PPNamedEntityStore *_namedEntityStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)locationQuery:(unsigned long long)a0 fromDate:(id)a1 consumerType:(unsigned long long)a2;
- (void)locationStore_registerFeedback:(id)a0 clientIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)connectionsStore_registerFeedback:(id)a0 clientIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)rankedNamedEntitiesWihQuery:(id)a0 error:(id *)a1;
- (void)namedEntityStore_registerFeedback:(id)a0 clientIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)namedEntityQuery:(unsigned long long)a0 fromDate:(id)a1 consumerType:(unsigned long long)a2;
- (BOOL)iterRecentLocationsForConsumer:(unsigned long long)a0 criteria:(id)a1 limit:(unsigned long long)a2 client:(id)a3 error:(id *)a4 block:(id /* block */)a5;
- (BOOL)iterRankedLocationsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;

@end
