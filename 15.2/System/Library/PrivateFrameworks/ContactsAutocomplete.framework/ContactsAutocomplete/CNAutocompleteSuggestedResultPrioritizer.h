@interface CNAutocompleteSuggestedResultPrioritizer : NSObject

+ (id)bestAvailablePrioritizer;
+ (id)peopleSuggesterPrioritizer;
+ (id)passthroughPrioritizer;

@end
