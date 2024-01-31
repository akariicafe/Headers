@class CNManagedConfiguration, NSArray, NSString, NSSet, CNContactStoreFilter, CNContactStore, CNAccountsAndGroupsItem, CNUIGroupsAndContainersSaveManager;

@interface CNAccountsAndGroupsDataSource : NSObject {
    CNContactStoreFilter *_serverFilter;
}

@property (retain, nonatomic) CNContactStore *store;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) CNAccountsAndGroupsItem *rootItem;
@property (retain, nonatomic) CNAccountsAndGroupsItem *currentlyEditingGroupItem;
@property (retain, nonatomic) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager;
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration;
@property (retain, nonatomic) NSString *currentlyEditingGroupIdentifier;
@property (nonatomic) BOOL hidesSearchableSources;
@property (nonatomic) BOOL onlyShowsGroupsInSections;
@property (retain, nonatomic) NSSet *targetAccountExternalIdentifiers;
@property (retain, nonatomic) NSSet *sourceAccountExternalIdentifiers;
@property (copy, nonatomic) CNContactStoreFilter *filter;
@property (readonly, nonatomic) CNContactStoreFilter *serverFilter;
@property (readonly, nonatomic) CNAccountsAndGroupsItem *showAllSectionItem;
@property (readonly, nonatomic, getter=isTrivial) BOOL trivial;

- (void)reload;
- (BOOL)hasChanges;
- (BOOL)isFilterShowingItem:(id)a0;
- (void)setServerFilterForItem:(id)a0;
- (id)containerIdentifierForItem:(id)a0;
- (id)initWithStore:(id)a0;
- (id)sectionIdentifierForItem:(id)a0;
- (long long)contactCountForMainItem:(id)a0;
- (long long)contactCountForItem:(id)a0;
- (void)_applyFilter;
- (void)setFilterForItem:(id)a0;
- (id)groupIdentifierForGroupItem:(id)a0;
- (void).cxx_destruct;
- (id)multiSelectFilter;
- (void)_reloadSections;
- (BOOL)shouldShowAccount:(id)a0;
- (void)removeServerFilter;
- (id)allContactsForItem:(id)a0 keysToFetch:(id)a1;
- (void)updateRootItemSelection;
- (id)allContactsForMainItem:(id)a0 keysToFetch:(id)a1;
- (id)sectionForIdentifier:(id)a0;

@end
