@class NSPredicate, NSFileProviderSearchQuery;

@interface FPSearchCollection : FPQueryCollection <FPSearchQueryResultsProviding> {
    NSPredicate *_filterPredicate;
}

@property (copy, nonatomic) NSFileProviderSearchQuery *searchQuery;

- (id)init;
- (void).cxx_destruct;
- (id)_createDescriptorWithSortDescriptors:(id)a0;
- (id)_enumerationSettingsPredicate;
- (id)createDataSourceWithSortDescriptors:(id)a0;
- (BOOL)isCollectionValidForItem:(id)a0;
- (id)scopedSearchQuery;

@end
