@interface MNCommuteDestinationMapsSuggestionsScore : MNCommuteDestinationScore

+ (double)weight;

- (int)score;
- (void)updateScoreIfPossible;
- (BOOL)destinationInvalid;
- (id)descriptionExtras;

@end
