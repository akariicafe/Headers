@class NSString, MNCommuteDestination, NSDate;
@protocol GEODirectionServiceTicket;

@interface MNCommuteDestinationETAScore : MNCommuteDestinationScore <MNCommuteDestinationObserver, MNCommuteDestinationComparisonScore> {
    int _score;
    BOOL _destinationInvalid;
}

@property (weak, nonatomic) MNCommuteDestination *otherDestination;
@property (nonatomic) double otherDestinationTravelTime;
@property (retain, nonatomic) NSDate *lastRouteUpdate;
@property (retain, nonatomic) id<GEODirectionServiceTicket> directionsRequestTicket;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)weight;

- (void).cxx_destruct;
- (int)score;
- (id)initWithDestination:(id)a0;
- (id)_routeAttributes;
- (void)updateScoreIfPossible;
- (BOOL)destinationInvalid;
- (id)descriptionExtras;
- (id)_directionsRequestFeedback;
- (void)_handleDirectionsResponse:(id)a0 error:(id)a1 forRequest:(id)a2;
- (void)commuteDestination:(id)a0 didChangeRemainingTime:(double)a1;
- (void)_updateScoreAndDestinationInvalid;
- (BOOL)supportsComparisonType:(unsigned long long)a0;
- (BOOL)_readyForRoute;
- (void)_requestRoute;
- (void)updateComparisonDestination:(id)a0 ofType:(unsigned long long)a1;

@end
