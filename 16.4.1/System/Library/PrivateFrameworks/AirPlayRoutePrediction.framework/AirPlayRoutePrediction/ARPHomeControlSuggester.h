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

- (void).cxx_destruct;
- (id)suggestionsWithMaxSuggestions:(unsigned long long)a0;
- (id)frequencybasedSuggestionsWitMaxSuggestions:(unsigned long long)a0;
- (id)frequencybasedSuggestionsWitMaxSuggestions:(unsigned long long)a0 events:(id)a1;
- (id)frequencybasedSuggestionsWitMaxSuggestions:(unsigned long long)a0 events:(id)a1 useScenes:(BOOL)a2;
- (id)homeKitEventsWithLookbackDays:(long long)a0;
- (id)initWithScoreThresholdForMicrolocationSuggestionsConsidered:(double)a0 highScoreThresholdForMicroLocationSuggestionMerge:(double)a1 lowScoreThresholdForMicroLocationSuggestionMerge:(double)a2 highScoreThresholdForTimeBasedSuggestionMerge:(double)a3 lowScoreThresholdForTimeBasedSuggestionMerge:(double)a4;
- (id)microlocationBasedsuggestionsWithMaxSuggestions:(unsigned long long)a0 referenceDate:(id)a1 correlationsFile:(id)a2;
- (id)mostRecentHomeKitEvent;
- (id)nextActionBasedsuggestionsWithMaxSuggestions:(unsigned long long)a0 referenceDate:(id)a1 correlationsFile:(id)a2;
- (id)suggestionsWithMaxSuggestions:(unsigned long long)a0 referenceDate:(id)a1 correlationsFile:(id)a2;
- (id)timeBasedSuggestionsWithMaxSuggestions:(unsigned long long)a0 referenceDate:(id)a1;
- (id)timeBasedSuggestionsWithMaxSuggestions:(unsigned long long)a0 referenceDate:(id)a1 fallBackToFrequency:(BOOL)a2;
- (id)timeBucketFrequencyBasedSuggestionsWithMaxSuggestions:(unsigned long long)a0 events:(id)a1 referenceDate:(id)a2;

@end
