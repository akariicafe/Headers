@class GEOSearchCategory;

@interface GEOBrowseCategoryFilter : NSObject <GEOSearchFilter, GEOAutocompleteFilter> {
    GEOSearchCategory *_category;
}

- (id)initWithCategory:(id)a0;
- (BOOL)applyToSearchParameters:(id)a0 error:(id *)a1;
- (BOOL)applyToAutocompleteParameters:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;

@end
