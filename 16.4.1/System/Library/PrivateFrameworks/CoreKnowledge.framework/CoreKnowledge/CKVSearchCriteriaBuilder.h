@class NSArray, NSMutableSet;

@interface CKVSearchCriteriaBuilder : NSObject {
    NSArray *_searchTerms;
    unsigned char _searchMode;
    NSMutableSet *_originAppFilters;
    NSMutableSet *_fieldTypeFilters;
    NSMutableSet *_itemTypeFilters;
}

- (id)build;
- (BOOL)_setError:(id *)a0 withCode:(long long)a1;
- (void).cxx_destruct;
- (id)initWithSearchTerms:(id)a0 searchMode:(unsigned char)a1;
- (id)addFieldTypeFilterWithCustomTypeNumber:(id)a0 error:(id *)a1;
- (id)addFieldTypeFilterWithNumber:(id)a0 error:(id *)a1;
- (id)addItemTypeFilterWithNumber:(id)a0 error:(id *)a1;
- (id)addOriginAppFilterWithAppId:(id)a0 error:(id *)a1;

@end
