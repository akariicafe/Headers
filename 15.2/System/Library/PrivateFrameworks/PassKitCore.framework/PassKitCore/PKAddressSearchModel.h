@class MKLocalSearch, CLLocationManager, NSArray, MKLocalSearchCompleter, NSString, CNContactStore, NSObject, CLGeocoder;
@protocol OS_dispatch_queue, PKAddressSearchModelDelegate;

@interface PKAddressSearchModel : NSObject <MKLocalSearchCompleterDelegate, CLLocationManagerDelegate> {
    NSArray *_contactsSearchResults;
    NSArray *_completionSearchResults;
}

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) MKLocalSearchCompleter *completer;
@property (retain, nonatomic) CLGeocoder *geocoder;
@property (retain, nonatomic) MKLocalSearch *localSearch;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultsQueue;
@property (readonly, nonatomic) NSArray *completionSearchResults;
@property (readonly, nonatomic) NSArray *contactsSearchResults;
@property (readonly, nonatomic) NSArray *recentsSearchResults;
@property (weak, nonatomic) id<PKAddressSearchModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginSearch:(id)a0;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)endSearch;
- (void)_updateRecents:(id)a0;
- (void)completerDidUpdateResults:(id)a0;
- (void)selectMapSearchCompletion:(id)a0;
- (void)_resetContactsSearchResults;

@end
