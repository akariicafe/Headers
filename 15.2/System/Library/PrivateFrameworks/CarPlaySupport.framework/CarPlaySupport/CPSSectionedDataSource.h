@class CPSTemplateEnvironment, NSArray, NSString, CPSessionConfiguration, NSMutableArray, NSIndexPath;

@interface CPSSectionedDataSource : CPSDataSource <CPSessionConfigurationDelegate> {
    BOOL _limitingWithSections;
    long long _maxVisibleSection;
    long long _numberOfVisibleItemsInLastSection;
}

@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) CPSessionConfiguration *sessionConfiguration;
@property (retain, nonatomic) NSArray *sectionHeightCache;
@property (readonly, nonatomic) NSIndexPath *assistantCellIndexPath;
@property (readonly, nonatomic) CPSTemplateEnvironment *templateEnvironment;
@property (nonatomic) long long assistantCellVisibility;
@property (nonatomic) long long assistantCellPosition;
@property (retain, nonatomic) NSString *assistantCellTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfItems;
- (long long)numberOfSections;
- (id)sectionAtIndex:(long long)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)itemAtIndexPath:(id)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)tableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (id)firstItemIndexPath;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (void).cxx_destruct;
- (void)updateSections:(id)a0;
- (long long)_filteredNumberOfItemsGivenSection:(long long)a0 numberOfItems:(long long)a1;
- (id)indexPathForItemWithIdentifier:(id)a0;
- (id)sectionWithIdentifier:(id)a0;
- (void)sessionConfiguration:(id)a0 limitedUserInterfacesChanged:(unsigned long long)a1;
- (void)reloadItems:(id)a0;
- (id)initWithSections:(id)a0 templateEnvironment:(id)a1;
- (double)heightForItemAtIndexPath:(id)a0 inEnvironment:(id)a1;
- (BOOL)isLimitingLists;
- (BOOL)showingAssistantInLastPosition;
- (void)rebuildHeightCacheWithEnvironment:(id)a0;
- (id)_sanitizedSectionIndexTitleForTitle:(id)a0;
- (void)invalidateHeightCache;
- (void)updateIndexPathForAssistantItem;

@end
