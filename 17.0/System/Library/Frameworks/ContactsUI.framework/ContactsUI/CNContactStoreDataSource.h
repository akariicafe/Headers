@class NSDictionary, CNCoalescingTimer, NSString, CNContactFormatter, CNContactStoreSnapshot, CNContactStoreFilter, CNManagedConfiguration, CNContact, NSArray, CNGroup, CNContainer, CNContactStore, CNContactFilter;
@protocol CNContactDataSourceDelegate, NSLocking, CNScheduler;

@interface CNContactStoreDataSource : NSObject <CNContactDataSource> {
    CNContactStoreSnapshot *_currentSnapshot;
    NSDictionary *_sectionHeadersDictionary;
    id<CNScheduler> _backgroundSnapshotScheduler;
    id<NSLocking> _reloadLock;
    BOOL _loadingSnapshot;
    id<CNScheduler> _mainThreadScheduler;
    id<CNScheduler> _databaseChangePreprocessor;
}

@property (copy, nonatomic) CNContact *meContact;
@property (nonatomic) BOOL meContactNeedsUpdate;
@property (retain, nonatomic) CNGroup *filteredGroup;
@property (retain, nonatomic) CNContainer *filteredContainer;
@property (retain, nonatomic) CNContactStore *store;
@property (retain, nonatomic) CNContactStoreSnapshot *currentSnapshot;
@property (readonly, nonatomic) long long sortOrder;
@property (readonly, nonatomic) NSDictionary *sectionHeadersDictionary;
@property (readonly, nonatomic) NSArray *indexSectionsArray;
@property (readonly, nonatomic) NSDictionary *localizedSectionHeaders;
@property (readonly, nonatomic) NSDictionary *localizedSectionIndices;
@property (retain, nonatomic) CNCoalescingTimer *contactStoreDidChangeCoalescer;
@property (copy, nonatomic) CNContactStoreFilter *filter;
@property (nonatomic) BOOL shouldRevalidateFilterOnStoreChange;
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration;
@property (retain, nonatomic) NSArray *keysToFetch;
@property (nonatomic) BOOL fetchUnified;
@property (readonly, nonatomic) BOOL filterShowsSingleGroup;
@property (readonly, nonatomic) BOOL filterShowsSingleExchangeFolder;
@property (readonly, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) NSDictionary *contactMatchInfos;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSArray *indexSections;
@property (weak, nonatomic) id<CNContactDataSourceDelegate> delegate;
@property (readonly, nonatomic) BOOL canReload;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) CNContactFilter *effectiveFilter;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (readonly, nonatomic) BOOL shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isErrorPossiblyRelatedToExtraStores:(id)a0;
+ (id)keyPathsForValuesAffectingEffectiveFilter;

- (BOOL)setMeContact:(id)a0 error:(id *)a1;
- (void)reload;
- (id)contacts;
- (void)contactStoreDidChangeHandler;
- (id)accountForContainerIdentifier:(id)a0;
- (void)reset;
- (void)dealloc;
- (BOOL)isLoading;
- (id)withReloadLock_prepareNewSnapshot;
- (id)indexPathForContact:(id)a0;
- (void)reloadAsynchronously;
- (void)_reloadWithSchedulingMethod:(unsigned long long)a0;
- (id)preferredForNameMeContactWithKeysToFetch:(id)a0;
- (id)initWithStore:(id)a0;
- (void)validateFilter;
- (void)invalidate;
- (void)contactStoreDidChange:(id)a0;
- (BOOL)canUseTitleForAccount:(id)a0;
- (id)completeContactFromContact:(id)a0 fromMainStoreOnly:(BOOL)a1 keysToFetch:(id)a2;
- (BOOL)doesFilterShowAllContainersForAccount:(id)a0;
- (void)registerForRelevantChangeNotifications;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)titleForContainer:(id)a0;
- (void)contactStoreMeContactDidChange:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)preferredForNameMeContactIdentifier;

@end
