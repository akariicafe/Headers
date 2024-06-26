@class NSCharacterSet, EKOccurrenceCacheLocationSearch, CLLocation, EKEventStore, MKLocalSearch, EKStructuredLocationWithImage, NSObject, CLGeocoder, CLLocationManager, NSMutableArray, NSMutableDictionary, NSString, CLInUseAssertion, CNContactStore, NSOperationQueue, NSArray, EKStructuredLocation, MKLocalSearchCompleter;
@protocol CNCancelable, EKUILocationSearchModelDelegate, OS_dispatch_queue, GEOMapServiceCompletionTicket;

@interface EKUILocationSearchModel : NSObject <CLLocationManagerDelegate, MKSearchCompleterDelegate> {
    CLLocationManager *_locationManager;
    CLInUseAssertion *_locationAssertion;
    MKLocalSearchCompleter *_completer;
    CLLocation *_currentImpreciseLocation;
    CLGeocoder *_geocoder;
    MKLocalSearch *_localSearch;
    CNContactStore *_contactStore;
    id<CNCancelable> _contactsSearchToken;
    NSObject<OS_dispatch_queue> *_recentsQueue;
    NSObject<OS_dispatch_queue> *_eventsQueue;
    NSObject<OS_dispatch_queue> *_customConferenceQueue;
    EKEventStore *_eventStore;
    EKOccurrenceCacheLocationSearch *_eventsSearch;
    NSCharacterSet *_whitespaceAndNewlineCharacterSet;
    NSObject<OS_dispatch_queue> *_conferenceRoomProcessingQueue;
    NSOperationQueue *_conferenceRoomOperationQueue;
    NSMutableArray *_mutableConferenceRoomSearchResults;
    NSMutableDictionary *_conferenceRoomAddressesToConferenceRooms;
    NSMutableArray *_allPossibleVirtualConferenceRooms;
}

@property (retain, nonatomic) EKStructuredLocation *currentLocation;
@property (nonatomic) unsigned long long supportedSearchTypes;
@property (readonly, nonatomic) EKStructuredLocationWithImage *locationFromMapsURL;
@property (readonly, nonatomic) NSArray *mapCompletionSearchResults;
@property (readonly, nonatomic) NSMutableArray *contactsSearchResults;
@property (readonly, nonatomic) NSMutableArray *recentsSearchResults;
@property (readonly, nonatomic) NSMutableArray *frequentsSearchResults;
@property (readonly, nonatomic) NSMutableArray *eventsSearchResults;
@property (readonly, nonatomic) NSArray *textualSearchResults;
@property (readonly, nonatomic) NSArray *conferenceRoomSearchResults;
@property (readonly, nonatomic) NSMutableArray *virtualConferenceRoomSearchResults;
@property (readonly, nonatomic) NSArray *virtualConferenceCustomSearchResults;
@property (weak, nonatomic) id<EKUILocationSearchModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<GEOMapServiceCompletionTicket> lastTicket;

+ (void)initialize;
+ (id)_linksInSource:(id)a0;
+ (id)_dataDetector;
+ (id)URLsFromSource:(id)a0;

- (id)initWithEventStore:(id)a0;
- (void)getCurrentLocation;
- (void)cancelSearch;
- (void)stopUpdatingLocation;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)dealloc;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)updateContacts:(id)a0;
- (void)completerDidFail:(id)a0 error:(id)a1;
- (void)completerDidUpdateResults:(id)a0 finished:(BOOL)a1;
- (void)selectMapSearchCompletion:(id)a0;
- (void)selectLocation:(id)a0;
- (void)_addDiscoveredConferenceRooms:(id)a0;
- (void)_addLocationToRecents:(id)a0 addressString:(id)a1 mapItem:(id)a2;
- (void)_handleAvailabilityResults:(id)a0 forOperation:(id)a1;
- (id)_imageForAttributes:(id)a0;
- (id)_imageForMapHandle:(id)a0;
- (void)_processDirectorySearchResultSet:(id)a0 forOperation:(id)a1;
- (void)_updateAllPossibleVirtualConferenceResultsWithRoomTypes:(id)a0;
- (void)_updateContactsSearchWithResults:(id)a0 forToken:(id)a1;
- (void)_updateMapURL:(id)a0;
- (void)_updateVirtualConferenceCustomOptions:(id)a0;
- (void)_updateVirtualConferenceOptions:(id)a0;
- (void)addConferenceRoomToRecents:(id)a0 fromSource:(id)a1;
- (id)availabilityRequestForConferenceRooms:(id)a0 duringEvent:(id)a1 resultsBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (void)beginSearchForTerm:(id)a0;
- (unsigned long long)dedupeResults;
- (BOOL)removeRecentLocation:(id)a0;
- (void)resetConferenceRoomSearchResults;
- (void)resetContactsSearchResults;
- (void)resetEventsSearchResults;
- (void)resetSearchResults:(BOOL)a0;
- (void)searchConferenceRooms:(id)a0;
- (void)searchFrequentLocations:(id)a0;
- (void)selectCurrentLocation;
- (void)selectVirtualConferenceRoomType:(id)a0;
- (id)splitEventLocations:(id)a0;
- (void)updateConferenceRoomAvailability:(id)a0 duringEvent:(id)a1 completionBlock:(id /* block */)a2;
- (void)updateEventLocations:(id)a0;
- (void)updateRecents:(id)a0;
- (void)updateVirtualConferenceRoomOptions:(id)a0;

@end
