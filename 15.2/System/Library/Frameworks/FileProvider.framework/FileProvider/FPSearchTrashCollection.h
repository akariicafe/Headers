@class NSFileProviderSearchQuery, NSPredicate, FPSearchCollection, FPTrashUnionCollection;

@interface FPSearchTrashCollection : FPUnionCollection <FPSearchQueryResultsProviding> {
    FPSearchCollection *_searchCollection;
    FPTrashUnionCollection *_trashCollection;
    NSPredicate *_searchQueryPredicate;
    unsigned long long _selectedMembership;
}

@property (copy, nonatomic) NSFileProviderSearchQuery *searchQuery;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isCollectionValidForItem:(id)a0;
- (id)scopedSearchQuery;

@end
