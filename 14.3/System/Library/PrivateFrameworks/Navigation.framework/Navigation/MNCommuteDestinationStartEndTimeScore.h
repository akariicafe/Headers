@interface MNCommuteDestinationStartEndTimeScore : MNCommuteDestinationScore

+ (double)weight;

- (int)score;
- (void)updateScoreIfPossible;
- (BOOL)destinationInvalid;
- (id)descriptionExtras;

@end
