@class NSString, _SFSearchEngineInfo;

@interface SearchQueryBuilder : NSObject {
    NSString *queryString;
    _SFSearchEngineInfo *engineInfo;
}

+ (id)searchQueryBuilderWithQuery:(id)a0;
+ (id)searchQueryBuilderWithXWebSearchURL:(id)a0;

- (id)queryString;
- (id)initWithQueryString:(id)a0;
- (void).cxx_destruct;
- (id)searchURL;
- (id)initWithSearchEngineInfo:(id)a0 queryString:(id)a1;
- (id)initWithXWebSearchURL:(id)a0;
- (BOOL)searchEngineIsDefault;
- (id)searchEngineInfo;

@end
