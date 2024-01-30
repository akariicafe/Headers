@interface GEOClientRankingModelFeatureSourceIdentifier : GEOClientRankingModelFeatureIdentifier

@property (readonly, nonatomic) long long sourceType;
@property (readonly, nonatomic) int suggestionType;
@property (readonly, nonatomic) int serverEntryType;

- (long long)featureIdentifierType;
- (id)initWithSuggestionType:(int)a0 serverEntryType:(int)a1 sourceType:(long long)a2;
- (id)init;

@end
