@class NSString, NSDictionary;

@interface SPSearchPhotosEntity : SPSearchEntity {
    NSString *_searchString;
    NSString *_queryString;
    NSString *_spotlightQueryString;
    NSDictionary *_rankCategories;
    NSDictionary *_rankTerms;
    BOOL _isNLP;
}

+ (BOOL)supportsSecureCoding;

- (id)searchString;
- (id)queryString;
- (void)encodeWithCoder:(id)a0;
- (id)symbolName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)spotlightQueryString;
- (id)tokenText;
- (BOOL)isPhotosEntitySearch;
- (id)initWithPhotosSearchString:(id)a0 spotlightQueryString:(id)a1 rankCategories:(id)a2 rankTerms:(id)a3 isNLQuery:(BOOL)a4 includeSyndicatedPhotos:(BOOL)a5 fromSuggestion:(BOOL)a6;
- (BOOL)isScopedSearch;
- (BOOL)isNLPEntitySearch;
- (id)spotlightFilterQueries;
- (void)updateSearchString:(id)a0;

@end
