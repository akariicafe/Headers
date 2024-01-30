@class CNContactStore, NSArray, CNAccountsAndGroupsItem, CNContactStoreFilter;

@interface CNAccountsAndGroupsDataSource : NSObject {
    CNContactStoreFilter *_filter;
    CNContactStoreFilter *_serverFilter;
}

@property (retain, nonatomic) CNContactStore *store;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) CNAccountsAndGroupsItem *rootItem;
@property (nonatomic) BOOL hidesSearchableSources;
@property (copy, nonatomic) CNContactStoreFilter *filter;
@property (readonly, nonatomic) CNContactStoreFilter *serverFilter;
@property (readonly, nonatomic) CNAccountsAndGroupsItem *showAllSectionItem;
@property (readonly, nonatomic, getter=isTrivial) BOOL trivial;

- (id)initWithStore:(id)a0;
- (void)reload;
- (void).cxx_destruct;
- (void)_applyFilter;
- (void)removeServerFilter;
- (void)updateRootItemSelection;
- (void)setServerFilterForItem:(id)a0;
- (void)_reloadSections;

@end
