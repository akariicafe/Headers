@class NSArray, NSString;
@protocol _DKKnowledgeQuerying;

@interface ARPHomeControlSuggester : NSObject

@property (readonly, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (retain, nonatomic) NSArray *homeKitEventsSortedByStartDate;
@property (nonatomic) double scoreThresholdForMicrolocationSuggestionsConsidered;
@property (nonatomic) double highScoreThresholdForMicroLocationSuggestionMerge;
@property (nonatomic) double lowScoreThresholdForMicroLocationSuggestionMerge;
@property (nonatomic) double highScoreThresholdForTimeBasedSuggestionMerge;
@property (nonatomic) double lowScoreThresholdForTimeBasedSuggestionMerge;
@property (nonatomic) double scoreSceneBoost;
@property (copy, nonatomic) NSString *correlationsSessionFile;

+ (id)suggester;
+ (id)defaultCorrelationsSessionFile;

- (id)microlocationBasedsuggestionsWithMaxSuggestions:(unsigned long long)a0 referenceDate:(id)a1 correlationsFile:(id)a2;
- (id)frequencybasedSuggestionsWitMaxSuggestions:(unsigned long long)a0 events:(id)a1 useScenes:(BOOL)a2;
- (void).cxx_destruct;
- (id)homeKitEventsWithPredicate:(id)a0 sortStartDateAscending:(BOOL)a1;
- (id)nextActionBasedsuggestionsWithMaxSuggestions:(unsigned long long)a0 referenceDate:(id)a1 correlationsFile:(id)a2;
- (id)timeBasedSuggestionsWithMaxSuggestions:(unsigned long long)a0 referenceDate:(id)a1;
- (id)frequencybasedSuggestionsWitMaxSuggestions:(unsigned long long)a0 events:(id)a1;
- (id)initWithKnowledgeStore:(id)a0;
- (id)suggestionsWithMaxSuggestions:(unsigned long long)a0 referenceDate:(id)a1 correlationsFile:(id)a2;
- (id)homeKitAccessoriesWithPredicate:(id)a0 sortStartDateAscending:(BOOL)a1;
- (id)initWithKnowledgeStore:(id)a0 scoreThresholdForMicrolocationSuggestionsConsidered:(double)a1 highScoreThresholdForMicroLocationSuggestionMerge:(double)a2 lowScoreThresholdForMicroLocationSuggestionMerge:(double)a3 highScoreThresholdForTimeBasedSuggestionMerge:(double)a4 lowScoreThresholdForTimeBasedSuggestionMerge:(double)a5;
- (id)homeKitScenesWithPredicate:(id)a0 sortStartDateAscending:(BOOL)a1;
- (id)timeBucketFrequencyBasedSuggestionsWithMaxSuggestions:(unsigned long long)a0 events:(id)a1 referenceDate:(id)a2;
- (id)timeBasedSuggestionsWithMaxSuggestions:(unsigned long long)a0 referenceDate:(id)a1 fallBackToFrequency:(BOOL)a2;
- (id)frequencybasedSuggestionsWitMaxSuggestions:(unsigned long long)a0;
- (id)suggestionsWithMaxSuggestions:(unsigned long long)a0;

@end
