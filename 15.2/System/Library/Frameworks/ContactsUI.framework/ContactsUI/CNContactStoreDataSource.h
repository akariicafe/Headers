@class CNContactStoreSnapshot, NSArray, CNContactStoreFilter, CNManagedConfiguration, NSString, CNContact, NSDictionary, CNContactStore, CNContactFilter, NSObject, CNContactFormatter;
@protocol CNContactDataSourceDelegate, OS_dispatch_queue, CNScheduler;

@interface CNContactStoreDataSource : NSObject <CNContactDataSource> {
    CNContactStoreSnapshot *_currentSnapshot;
    NSDictionary *_sectionHeadersDictionary;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _loadingSnapshot;
    id<CNScheduler> _mainThreadScheduler;
}

@property (copy, nonatomic) CNContact *meContact;
@property (nonatomic) BOOL meContactNeedsUpdate;
@property (retain, nonatomic) CNContactStore *store;
@property (retain, nonatomic) CNContactStoreSnapshot *currentSnapshot;
@property (readonly, nonatomic) long long sortOrder;
@property (readonly, nonatomic) NSDictionary *sectionHeadersDictionary;
@property (readonly, nonatomic) NSArray *indexSectionsArray;
@property (readonly, nonatomic) NSDictionary *localizedSectionHeaders;
@property (readonly, nonatomic) NSDictionary *localizedSectionIndices;
@property (copy, nonatomic) CNContactStoreFilter *filter;
@property (nonatomic) BOOL shouldRevalidateFilterOnStoreChange;
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration;
@property (retain, nonatomic) NSArray *keysToFetch;
@property (nonatomic) BOOL fetchUnified;
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
- (BOOL)isLoading;
- (id)contacts;
- (void)reload;
- (id)preferredForNameMeContactWithKeysToFetch:(id)a0;
- (id)initWithStore:(id)a0;
- (void)validateFilter;
- (void)contactStoreMeContactDidChange:(id)a0;
- (id)completeContactFromContact:(id)a0 fromMainStoreOnly:(BOOL)a1 keysToFetch:(id)a2;
- (void)reloadAsynchronously;
- (id)preferredForNameMeContactIdentifier;
- (void).cxx_destruct;
- (void)_reloadSynchronously:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)invalidate;
- (id)indexPathForContact:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)contactStoreDidChange:(id)a0;
- (void)reset;
- (void)registerForRelevantChangeNotifications;

@end
