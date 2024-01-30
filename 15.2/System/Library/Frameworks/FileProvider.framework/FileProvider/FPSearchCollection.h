@class NSPredicate, NSFileProviderSearchQuery;

@interface FPSearchCollection : FPQueryCollection <FPSearchQueryResultsProviding> {
    NSPredicate *_filterPredicate;
}

@property (copy, nonatomic) NSFileProviderSearchQuery *searchQuery;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isCollectionValidForItem:(id)a0;
- (id)createDataSourceWithSortDescriptors:(id)a0;
- (id)scopedSearchQuery;
- (id)_enumerationSettingsPredicate;
- (id)_createDescriptorWithSortDescriptors:(id)a0;

@end
