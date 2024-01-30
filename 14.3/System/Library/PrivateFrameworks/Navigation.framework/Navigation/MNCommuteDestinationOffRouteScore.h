@class NSMutableArray;

@interface MNCommuteDestinationOffRouteScore : MNCommuteDestinationScore <MNCommuteDestinationLocationScore> {
    int _score;
    BOOL _destinationInvalid;
}

@property (retain, nonatomic) NSMutableArray *offRouteEntries;

+ (double)weight;

- (void).cxx_destruct;
- (int)score;
- (id)initWithDestination:(id)a0;
- (void)updateForLocation:(id)a0;
- (void)updateScoreIfPossible;
- (BOOL)destinationInvalid;
- (id)descriptionExtras;
- (void)_updateScoreAndDestinationInvalid;
- (void)updateForRerouteWithLocation:(id)a0;

@end
