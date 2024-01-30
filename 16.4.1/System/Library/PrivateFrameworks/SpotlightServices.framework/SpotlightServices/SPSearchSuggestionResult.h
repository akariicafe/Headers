@class NSString, SFSearchSuggestion, NSArray;

@interface SPSearchSuggestionResult : SFSearchResult_SpotlightExtras

@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) SFSearchSuggestion *suggestion;
@property (retain, nonatomic) NSArray *searchEntities;

+ (BOOL)supportsSecureCoding;
+ (id)_richDisplayTextForSuggestion:(id)a0 forQuery:(id)a1;
+ (id)searchSuggestionRankingResultWithResult:(id)a0 query:(id)a1 sectionBundleIdentifier:(id)a2 queryId:(unsigned long long)a3;
+ (id)searchSuggestionRankingResultWithSuggestion:(id)a0 query:(id)a1 sectionBundleIdentifier:(id)a2 queryId:(unsigned long long)a3;
+ (void)updateRankingItemForSuggestionResult:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSearchSuggestion:(id)a0 query:(id)a1 sectionBundleIdentifier:(id)a2 queryId:(unsigned long long)a3;
- (id)initWithSearchResult:(id)a0 query:(id)a1 sectionBundleIdentifier:(id)a2 queryId:(unsigned long long)a3;
- (id)suggestionsFeedbackData;

@end
