@class NSString, NSDictionary;

@interface SPSearchNLPEntity : SPSearchEntity {
    NSString *_searchString;
    NSString *_queryString;
    NSString *_spotlightQueryString;
    NSDictionary *_rankCategories;
    NSDictionary *_rankTerms;
}

+ (BOOL)supportsSecureCoding;

- (id)searchString;
- (id)queryString;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)spotlightQueryString;
- (id)spotlightRankTerms;
- (id)spotlightRankCategories;
- (id)initWithSearchString:(id)a0 spotlightQueryString:(id)a1 spotlightRankCategories:(id)a2 spotlightRankTerms:(id)a3 fromSuggestion:(BOOL)a4;
- (BOOL)isNLPEntitySearch;
- (void)updateSearchString:(id)a0;

@end
