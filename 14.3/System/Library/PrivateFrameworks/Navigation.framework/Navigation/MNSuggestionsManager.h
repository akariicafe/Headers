@class NSArray, NSMutableDictionary, NSHashTable, NSString;

@interface MNSuggestionsManager : NSObject <MNLocationManagerObserver>

@property (retain, nonatomic) NSMutableDictionary *suggestionsStorage;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL changingState;
@property (nonatomic) unsigned long long state;
@property (readonly) NSArray *allSuggestions;
@property (nonatomic) BOOL locationsAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)locationManagerDidPauseLocationUpdates:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)locationManagerUpdatedLocation:(id)a0;
- (void)locationManagerFailedToUpdateLocation:(id)a0 withError:(id)a1;
- (void)locationManagerDidReset:(id)a0;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)a0;
- (void)removeObserver:(id)a0;
- (void)locationManager:(id)a0 didUpdateVehicleHeading:(double)a1 timestamp:(id)a2;
- (void)locationManager:(id)a0 didUpdateVehicleSpeed:(double)a1 timestamp:(id)a2;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)addSuggestions:(id)a0;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;
- (void)_startListenForDebugTestNotifications;
- (void)_stopListenForDebugTestNotifications;
- (void)_verifyHaveObservers;
- (void)_notifyObserversDidAddSuggestion:(id)a0;
- (void)_notifyObserversDidUpdateSuggestions;
- (void)_updateLocationsAvailable;
- (BOOL)refreshSuggestions;
- (void)_addFakeSuggestion:(id)a0;

@end
