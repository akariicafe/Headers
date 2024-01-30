@class NSArray, CPTrip, CPMapTemplate;
@protocol CPNavigationSessionManaging;

@interface CPNavigationSession : NSObject

@property (retain, nonatomic) CPTrip *trip;
@property (retain, nonatomic) id<CPNavigationSessionManaging> manager;
@property (weak, nonatomic) CPMapTemplate *mapTemplate;
@property (copy, nonatomic) NSArray *upcomingManeuvers;

- (void).cxx_destruct;
- (void)pauseTripForReason:(unsigned long long)a0 description:(id)a1;
- (void)finishTrip;
- (void)cancelTrip;
- (void)updateTravelEstimates:(id)a0 forManeuver:(id)a1;
- (id)initWithTrip:(id)a0 manager:(id)a1 mapTemplate:(id)a2;
- (id)_currentTripId;

@end
