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

- (id)initWithStore:(id)a0;
- (void)contactStoreDidChange:(id)a0;
- (void)registerForRelevantChangeNotifications;
- (void)reload;
- (BOOL)setMeContact:(id)a0 error:(id *)a1;
- (id)contacts;
- (BOOL)isLoading;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (void)_reloadSynchronously:(BOOL)a0;
- (void)dealloc;
- (id)preferredForNameMeContactIdentifier;
- (id)indexPathForContact:(id)a0;
- (id)preferredForNameMeContactWithKeysToFetch:(id)a0;
- (void)reloadAsynchronously;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)contactStoreMeContactDidChange:(id)a0;
- (id)completeContactFromContact:(id)a0 fromMainStoreOnly:(BOOL)a1 keysToFetch:(id)a2;
- (void)invalidate;

@end
