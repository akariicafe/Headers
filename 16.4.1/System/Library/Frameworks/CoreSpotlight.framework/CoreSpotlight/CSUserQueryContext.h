@interface CSUserQueryContext : CSSearchQueryContext {
    BOOL _enableSuggestionTokens;
}

@property (nonatomic) BOOL enableRankedResults;
@property (nonatomic) long long maxResultCount;
@property (nonatomic) long long maxSuggestionCount;

+ (id)userQueryContext;
+ (id)userQueryContextWithCurrentSuggestion:(id)a0;

@end
