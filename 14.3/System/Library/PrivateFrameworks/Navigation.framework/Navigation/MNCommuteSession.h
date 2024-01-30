@class MNCommuteDestinationUpdater, NSString, NSArray, MNObserverHashTable, MNSuggestionsManager, NSMutableDictionary, MNNavigationTraceManager, NSTimer, MNLocation, MNLocationHistory;
@protocol MNCommuteSessionObserver;

@interface MNCommuteSession : NSObject <MNCommuteDestinationUpdaterDelegate, MNCommuteDestinationObserver, MNLocationManagerObserver, MNSuggestionsManagerObserver> {
    MNObserverHashTable<MNCommuteSessionObserver> *_observers;
    MNSuggestionsManager *_suggestionsManager;
    NSMutableDictionary *_suggestions;
    NSArray *_rankedDestinations;
    id _rankedDestinationsSync;
    NSTimer *_etaUpdateTimer;
    unsigned long long _currentSuggestionID;
    MNLocation *_lastLocation;
    MNLocationHistory *_locationHistory;
}

@property (weak, nonatomic) MNCommuteDestinationUpdater *comparisonDestinationStartTime;
@property (nonatomic) unsigned long long requestedCommuteSessionState;
@property (nonatomic) unsigned long long commuteSessionState;
@property (readonly, nonatomic) MNNavigationTraceManager *traceManager;
@property (readonly, nonatomic) NSArray *rankedDestinations;
@property (readonly) NSString *suggestionsDescription;
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
- (void)updateLocation:(id)a0;
- (void)stop;
- (void)addObserver:(id)a0;
- (void)start;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;
- (void)commuteDestination:(id)a0 didChangeInvalid:(BOOL)a1;
- (void)suggestionsManager:(id)a0 didAddSuggestion:(id)a1;
- (void)destinationUpdater:(id)a0 didUpdateDestination:(id)a1;
- (void)destinationUpdaterDidArrive:(id)a0;
- (void)startETAUpdatesWithInterval:(double)a0;
- (void)stopETAUpdates;
- (void)addSuggestion:(id)a0;
- (void)_updateSuggestionsManagerState;
- (void)_updatedDestinations;
- (void)updateComparisonStartDate;
- (void)_resetRankedDestinations;
- (id)initWithTraceName:(id)a0 isTraceRecording:(BOOL)a1;

@end
