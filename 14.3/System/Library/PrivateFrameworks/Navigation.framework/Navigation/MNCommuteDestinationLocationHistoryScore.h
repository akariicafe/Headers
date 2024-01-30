@class NSArray;

@interface MNCommuteDestinationLocationHistoryScore : MNCommuteDestinationScore <MNCommuteDestinationLocationHistoryScore> {
    int _score;
    BOOL _destinationInvalid;
}

@property (copy, nonatomic) NSArray *locationHistory;
@property (nonatomic) double scoredDistance;
@property (nonatomic) double scoredTimeInterval;

+ (double)weight;

- (void).cxx_destruct;
- (int)score;
- (void)updateScoreIfPossible;
- (BOOL)destinationInvalid;
- (id)descriptionExtras;
- (void)updateLocationHistory:(id)a0;
- (int)_scoreForDistance:(double)a0 timeInterval:(double)a1;

@end
