@class NSString, NSMutableDictionary, PPLocationQuery, NSArray, NSError, PPNamedEntityQuery;

@interface MapsSuggestionsFakePortraitConnector : NSObject <MapsSuggestionsPortraitConnector> {
    unsigned long long _calledLocationQuery;
    unsigned long long _calledNamedEntityQuery;
    unsigned long long _calledIterRankedLocations;
    unsigned long long _calledNamedEntityStoreRegisterFeedback;
    unsigned long long _calledLocationStoreRegisterFeedback;
    unsigned long long _calledConnectionsStoreRegisterFeedback;
    unsigned long long _calledIterRecentLocationsForConsumer;
    NSMutableDictionary *_configuredRankedLocationsForQuery;
    PPLocationQuery *_configuredLocationQuery;
    PPNamedEntityQuery *_configuredNamedEntityQuery;
    unsigned long long _currentRankedLocationIndex;
    NSArray *_configuredConnectionsLocations;
    unsigned long long _currentConnectionsLocationIndex;
    unsigned long long _calledRankedNamedEntitiesWithQuery;
    NSArray *_configuredNamedEntities;
    NSError *_configuredError;
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
- (unsigned long long)calledNamedEntityStoreRegisterFeedback;
- (void)configureLocationQuery:(id)a0;
- (unsigned long long)calledLocationStoreRegisterFeedback;
- (unsigned long long)calledConnectionsStoreRegisterFeedback;
- (void)configureNamedEntityQuery:(id)a0;
- (void)configureRankedLocations:(id)a0 forQuery:(id)a1;
- (void)configureConnectionLocations:(id)a0;
- (void)configureNamedEntites:(id)a0;
- (BOOL)iterRecentLocationsForConsumer:(unsigned long long)a0 criteria:(id)a1 limit:(unsigned long long)a2 client:(id)a3 error:(id *)a4 block:(id /* block */)a5;
- (BOOL)iterRankedLocationsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (void)configureError:(id)a0;

@end
