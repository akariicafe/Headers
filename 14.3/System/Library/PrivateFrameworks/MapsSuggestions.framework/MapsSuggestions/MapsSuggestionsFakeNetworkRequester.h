@class NSString, NSArray, NSMutableDictionary, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsFakeNetworkRequester : NSObject <MapsSuggestionsNetworkRequester> {
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    NSArray *_fakeMapItems;
    NSMutableDictionary *_fakeMapItemsPerKey;
    NSMutableDictionary *_fakeWaypointsPerKey;
    NSMutableDictionary *_fakeTrafficPerWaypoint;
    NSError *_fakeError;
    NSError *_fakeErrorForETA;
    unsigned long long _calledFwdGeoByPostalAddress;
    unsigned long long _calledFwdGeoByAddressString;
    unsigned long long _calledRevGeo;
    unsigned long long _calledMapItemHandle;
    unsigned long long _calledCanonicalByPostalAddress;
    unsigned long long _calledSearch;
    unsigned long long _calledSearchByPOICategory;
    unsigned long long _calledWaypointForMapItem;
    unsigned long long _calledWaypointForLocation;
    unsigned long long _calledWaypointForAddressString;
    unsigned long long _calledETAForWaypoint;
    BOOL _breakCallbackPromise;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)canonicalLocalSearchPostalAddress:(id)a0 completion:(id /* block */)a1;
- (id)configureWaypoint:(id)a0 forMapItem:(id)a1;
- (char)forwardGeocodePostalAddress:(id)a0 completion:(id /* block */)a1;
- (char)searchPOIWithName:(id)a0 ofPOICategory:(id)a1 withinVenue:(id)a2 maxResults:(unsigned long long)a3 completion:(id /* block */)a4;
- (char)searchWithAirportCode:(id)a0 terminal:(id)a1 gate:(id)a2 completion:(id /* block */)a3;
- (char)composedWaypointForMapItem:(id)a0 completion:(id /* block */)a1;
- (char)composedWaypointForLocation:(id)a0 completion:(id /* block */)a1;
- (char)composedWaypointForAddressString:(id)a0 completion:(id /* block */)a1;
- (void)configureMapItems:(id)a0;
- (void)configureMapItems:(id)a0 forPOICategory:(id)a1;
- (void)configureMapItem:(id)a0 forHandleData:(id)a1;
- (void)configureMapItem:(id)a0 forPostalAddress:(id)a1;
- (id)configureWaypointForMapItem:(id)a0;
- (void)configureTraffic:(id)a0 forWaypoint:(id)a1;
- (void)configureETARequestError:(id)a0;
- (void)configureBrokenCallBackPromise;
- (void).cxx_destruct;
- (unsigned long long)calledRequestFwdGeoByPostalAddress;
- (unsigned long long)calledRequestFwdGeoByAddressString;
- (unsigned long long)calledRequestRevGeo;
- (unsigned long long)calledRequestMapItemHandle;
- (unsigned long long)calledCanonicalLocalSearchByPostalAddress;
- (unsigned long long)calledRequestSearch;
- (unsigned long long)calledRequestSearchByPOICategory;
- (unsigned long long)calledRequestETAForWaypoint;
- (unsigned long long)calledRequestWaypointForMapItem;
- (unsigned long long)calledRequestWaypointForLocation;
- (unsigned long long)calledRequestWaypointForAddressString;
- (id).cxx_construct;
- (id)initFromResourceDepot:(id)a0;
- (void)configureError:(id)a0;
- (char)ETAFromWaypoint:(id)a0 toWaypoint:(id)a1 transportType:(int)a2 automobileOptions:(id)a3 completion:(id /* block */)a4;
- (char)resolveMapItemHandleData:(id)a0 completion:(id /* block */)a1;
- (char)reverseGeocodeCoordinate:(struct { double x0; double x1; })a0 completion:(id /* block */)a1;
- (char)forwardGeocodeAddressString:(id)a0 completion:(id /* block */)a1;
- (char)searchString:(id)a0 maxResults:(unsigned int)a1 completion:(id /* block */)a2;

@end
