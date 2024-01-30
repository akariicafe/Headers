@class NAFuture, NSArray, CPTrip, CPMapTemplate;
@protocol CPNavigationSessionManaging;

@interface CPNavigationSession : NSObject

@property (retain, nonatomic) CPTrip *trip;
@property (weak, nonatomic) CPMapTemplate *mapTemplate;
@property (retain, nonatomic) NAFuture *navigationSessionManagerFuture;
@property (retain, nonatomic) id<CPNavigationSessionManaging> manager;
@property (copy, nonatomic) NSArray *upcomingManeuvers;

- (void).cxx_destruct;
- (void)pauseTripForReason:(unsigned long long)a0 description:(id)a1;
- (id)_currentTripId;
- (void)cancelTrip;
- (void)finishTrip;
- (id)initWithTrip:(id)a0 mapTemplate:(id)a1;
- (void)pauseTripForReason:(unsigned long long)a0 description:(id)a1 turnCardColor:(id)a2;
- (void)updateTravelEstimates:(id)a0 forManeuver:(id)a1;

@end
