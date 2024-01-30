@interface GEOClientRankingModelFeatureSourceIdentifier : GEOClientRankingModelFeatureIdentifier

@property (readonly, nonatomic) long long sourceType;
@property (readonly, nonatomic) int suggestionType;
@property (readonly, nonatomic) int serverEntryType;

- (id)init;
- (long long)featureIdentifierType;
- (id)initWithSuggestionType:(int)a0 serverEntryType:(int)a1 sourceType:(long long)a2;

@end
