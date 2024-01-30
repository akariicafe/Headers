@class NSArray, NSString, CPSessionConfiguration, NSMutableArray;

@interface CPSSectionedDataSource : CPSDataSource <CPSessionConfigurationDelegate> {
    BOOL _limitingWithSections;
    long long _maxVisibleSection;
    long long _numberOfVisibleItemsInLastSection;
}

@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) CPSessionConfiguration *sessionConfiguration;
@property (retain, nonatomic) NSArray *sectionHeightCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)sectionAtIndex:(long long)a0;
- (long long)tableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (id)initWithItems:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)appendSection:(id)a0;
- (id)indexPathForItemWithIdentifier:(id)a0;
- (long long)_filteredNumberOfItemsGivenSection:(long long)a0 numberOfItems:(long long)a1;
- (id)initWithSection:(id)a0;
- (id)items;
- (id)initWithSections:(id)a0;
- (void)insertSection:(id)a0 atIndex:(unsigned long long)a1;
- (id)itemAtIndexPath:(id)a0;
- (void)updateSections:(id)a0;
- (void)deleteSectionAtIndex:(unsigned long long)a0;
- (id)firstItemIndexPath;
- (void)sessionConfiguration:(id)a0 limitedUserInterfacesChanged:(unsigned long long)a1;
- (void)reloadItems:(id)a0;
- (double)heightForItemAtIndexPath:(id)a0 inEnvironment:(id)a1;
- (BOOL)isLimitingLists;
- (void)rebuildHeightCacheWithEnvironment:(id)a0;
- (id)_sanitizedSectionIndexTitleForTitle:(id)a0;
- (void)invalidateHeightCache;

@end
