@class NSMutableArray;

@interface MNCommuteDestinationGeodesicDistanceScore : MNCommuteDestinationScore <MNCommuteDestinationLocationScore> {
    int _score;
}

@property (retain, nonatomic) NSMutableArray *geodesicDistances;
@property (nonatomic) double slope;

+ (double)weight;

- (void).cxx_destruct;
- (int)score;
- (id)initWithDestination:(id)a0;
- (void)updateForLocation:(id)a0;
- (void)updateScoreIfPossible;
- (BOOL)destinationInvalid;
- (id)descriptionExtras;
- (void)_updateScoreAndDestinationInvalid;

@end
