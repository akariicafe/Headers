@class MNCommuteDestinationStartEndTimeScore, MNCommuteDestinationGeodesicDistanceScore, NSDate, MNLocation, NSDictionary, MNCommuteDestinationOffRouteScore, MNCommuteDestinationMapsSuggestionsScore, NSString, MNTimeAndDistanceUpdater, MNNavigationTraceManager, NSArray, MNCommuteDestination, MNCommuteLocationTracker;
@protocol MNCommuteDestinationUpdaterDelegate;

@interface MNCommuteDestinationUpdater : NSObject <MNLocationTrackerDelegate, MNCommuteDestinationScoreObserver> {
    MNCommuteLocationTracker *_locationTracker;
    MNNavigationTraceManager *_traceManager;
    MNTimeAndDistanceUpdater *_timeAndDistanceUpdater;
}

@property (class, readonly, nonatomic) NSArray *scoreClasses;
@property (class, retain, nonatomic) NSDate *sessionStartDate;

@property (readonly, nonatomic) NSDictionary *scores;
@property (readonly, nonatomic) MNCommuteDestinationGeodesicDistanceScore *geodesicDistanceScore;
@property (readonly, nonatomic) MNCommuteDestinationMapsSuggestionsScore *mapsSuggestionsScore;
@property (readonly, nonatomic) MNCommuteDestinationOffRouteScore *offRouteScore;
@property (readonly, nonatomic) MNCommuteDestinationStartEndTimeScore *startEndTimeScore;
@property (retain, nonatomic) MNLocation *lastLocation;
@property (weak, nonatomic) id<MNCommuteDestinationUpdaterDelegate> delegate;
@property (readonly, nonatomic) MNCommuteDestination *commuteDestination;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (nonatomic) unsigned long long suggestionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)route;
- (void)dealloc;
- (void)stop;
- (void)updateETA;
- (void)updateForLocation:(id)a0;
- (void)start;
- (void)locationTrackerDidArrive:(id)a0;
- (void)locationTracker:(id)a0 didUpdateMatchedLocation:(id)a1;
- (void)locationTracker:(id)a0 didUpdateETAForRoute:(id)a1;
- (void)locationTrackerWillReroute:(id)a0;
- (void)locationTrackerDidCancelReroute:(id)a0;
- (void)locationTracker:(id)a0 didReroute:(id)a1 newAlternateRoutes:(id)a2 rerouteReason:(unsigned long long)a3 request:(id)a4 response:(id)a5;
- (void)locationTracker:(id)a0 didFailRerouteWithError:(id)a1;
- (id)initWithSuggestion:(id)a0 traceManager:(id)a1;
- (void)updateComparisonDestination:(id)a0 ofType:(unsigned long long)a1;
- (id)_generateScoreObjects;
- (void)_updateDestination;
- (void)updateLocationHistory:(id)a0;
- (void)commuteScoreUpdaterDidUpdate:(id)a0;

@end
