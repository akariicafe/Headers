@class NSString;

@interface SPSearchSuggestionEntity : SPSearchEntity {
    NSString *_searchString;
    NSString *_queryString;
    NSString *_spotlightQueryString;
}

+ (BOOL)supportsSecureCoding;

- (id)searchString;
- (id)queryString;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)spotlightQueryString;
- (id)initWithSearchString:(id)a0 spotlightQueryString:(id)a1 preferredBundleIDs:(id)a2;
- (void)updateSearchString:(id)a0;

@end
