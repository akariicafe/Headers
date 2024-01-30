@class NSString, MapsSuggestionsLimitedDictionary, MapsSuggestionsMeCard, MapsSuggestionsLocaleChangedTrigger, NSObject, MapsSuggestionsObservers;
@protocol OS_dispatch_queue, MapsSuggestionsContactsConnector, MapsSuggestionsNetworkRequester;

@interface MapsSuggestionsContacts : NSObject <MapsSuggestionsMeCardReader> {
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    id<MapsSuggestionsContactsConnector> _connector;
    id<MapsSuggestionsNetworkRequester> _networkRequester;
    MapsSuggestionsLimitedDictionary *_cache;
    MapsSuggestionsObservers *_meCardObservers;
    MapsSuggestionsMeCard *_currMeCard;
    MapsSuggestionsLocaleChangedTrigger *_localeChangedTrigger;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeMeCardObserver:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)contactsDidUpdate;
- (char)readMeCardAddressStringsWithHandler:(id /* block */)a0;
- (id)initWithConnector:(id)a0 networkRequester:(id)a1;
- (id).cxx_construct;
- (char)readMeCardWithHandler:(id /* block */)a0;
- (id)initFromResourceDepot:(id)a0;
- (void)addMeCardObserver:(id)a0;

@end
