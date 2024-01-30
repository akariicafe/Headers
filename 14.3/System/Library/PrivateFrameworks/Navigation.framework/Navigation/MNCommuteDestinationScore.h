@class NSString, NSHashTable, MNCommuteDestination, NSDate, MNCommuteDestinationSuggestion;

@interface MNCommuteDestinationScore : NSObject

@property (class, readonly) double weight;
@property (class, retain, nonatomic) NSDate *sessionStartDate;
@property (class, readonly) NSDate *sessionStartDateOrNow;

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSDate *lastUpdate;
@property (weak, nonatomic) MNCommuteDestination *destination;
@property (readonly, nonatomic) BOOL destinationInvalid;
@property (readonly, nonatomic) int score;
@property (readonly) double weightedScore;
@property (readonly) MNCommuteDestinationSuggestion *destinationSuggestion;
@property (readonly, nonatomic) NSString *descriptionExtras;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)notifyObservers;
- (id)initWithDestination:(id)a0;
- (void)addObserver:(id)a0;
- (id)description;
- (void)lastUpdateIsNow;
- (void)updateScoreIfPossible;

@end
