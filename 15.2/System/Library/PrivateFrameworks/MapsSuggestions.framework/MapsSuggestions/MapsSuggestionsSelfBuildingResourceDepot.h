@class MapsSuggestionsUser, NSString, MapsSuggestionsFlightUpdater, MapsSuggestionsPortrait, MapsSuggestionsEventKit, MapsSuggestionsVirtualGarage, MapsSuggestionsRoutine, MapsSuggestionsMapsSync, MapsSuggestionsInsights, MapsSuggestionsContacts, MapsSuggestionsShortcutManager;
@protocol MapsSuggestionsRoutineConnector, MapsSuggestionsPortraitConnector, MapsSuggestionsContactsConnector, MapsSuggestionsMapsSyncConnector, MapsSuggestionsVirtualGarageConnector, MapsSuggestionsNetworkRequester, MapsSuggestionsShortcutStorage, MapsSuggestionsSourceDelegate, MapsSuggestionsEventKitConnector, MapsSuggestionsShortcutSuggestor, MapsSuggestionsFlightRequester;

@interface MapsSuggestionsSelfBuildingResourceDepot : NSObject <MapsSuggestionsFullResourceDepot, NSCopying> {
    NSString *_name;
    id<MapsSuggestionsSourceDelegate> _oneSourceDelegate;
    id<MapsSuggestionsNetworkRequester> _oneNetworkRequester;
    id<MapsSuggestionsRoutineConnector> _oneRoutineConnector;
    MapsSuggestionsRoutine *_oneRoutine;
    id<MapsSuggestionsPortraitConnector> _onePortraitConnector;
    MapsSuggestionsPortrait *_onePortrait;
    id<MapsSuggestionsEventKitConnector> _oneEventKitConnector;
    MapsSuggestionsEventKit *_oneEventKit;
    id<MapsSuggestionsVirtualGarageConnector> _oneVirtualGarageConnector;
    MapsSuggestionsVirtualGarage *_oneVirtualGarage;
    id<MapsSuggestionsMapsSyncConnector> _oneMapsSyncConnector;
    MapsSuggestionsMapsSync *_oneMapsSync;
    id<MapsSuggestionsContactsConnector> _oneContactsConnector;
    MapsSuggestionsContacts *_oneContacts;
    id<MapsSuggestionsShortcutStorage> _oneFavoritesStorage;
    id<MapsSuggestionsShortcutSuggestor> _oneFavoritesSuggestor;
    MapsSuggestionsShortcutManager *_oneFavorites;
    MapsSuggestionsUser *_oneUser;
    MapsSuggestionsInsights *_oneInsights;
    id<MapsSuggestionsFlightRequester> _oneFlightRequester;
    MapsSuggestionsFlightUpdater *_oneFlightUpdater;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setOneRoutine:(id)a0;
- (id)onePortrait;
- (id)oneMapsSyncConnector;
- (id)oneFavoritesStorage;
- (id)oneEventKitConnector;
- (void)setOneEventKit:(id)a0;
- (void)setOneUser:(id)a0;
- (id)oneNetworkRequester;
- (void)setOneContactsConnector:(id)a0;
- (void)setOnePortrait:(id)a0;
- (void)setOneInsights:(id)a0;
- (void)setOneNetworkRequester:(id)a0;
- (id)oneContactsConnector;
- (id)onePortraitConnector;
- (id)oneContacts;
- (id)oneFavoritesSuggestor;
- (void)setOneVirtualGarageConnector:(id)a0;
- (void)setOneFlightUpdater:(id)a0;
- (void)setOneFavorites:(id)a0;
- (void)setOneSourceDelegate:(id)a0;
- (id)oneFlightUpdater;
- (void)setOneFlightRequester:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)oneInsights;
- (void)setOneMapsSync:(id)a0;
- (id)oneMapsSync;
- (void)setOnePortraitConnector:(id)a0;
- (id)oneVirtualGarageConnector;
- (void)setOneRoutineConnector:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setOneContacts:(id)a0;
- (id)oneUser;
- (id)oneVirtualGarage;
- (id)oneFlightRequester;
- (id)oneFavorites;
- (id)oneSourceDelegate;
- (id)oneRoutine;
- (id)oneEventKit;
- (id)oneRoutineConnector;
- (void)setOneEventKitConnector:(id)a0;
- (void)setOneVirtualGarage:(id)a0;
- (void)setOneMapsSyncConnector:(id)a0;

@end
