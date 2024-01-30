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

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)symbolName;
- (void)updateSearchString:(id)a0;
- (id)queryString;
- (id)searchString;
- (void).cxx_destruct;
- (id)spotlightQueryString;
- (id)tokenText;
- (id)initWithPhotosSearchString:(id)a0 spotlightQueryString:(id)a1 rankCategories:(id)a2 rankTerms:(id)a3 isNLQuery:(BOOL)a4 includeSyndicatedPhotos:(BOOL)a5 fromSuggestion:(BOOL)a6;
- (BOOL)isNLPEntitySearch;
- (BOOL)isPhotosEntitySearch;
- (BOOL)isScopedSearch;
- (id)spotlightFilterQueries;

@end
