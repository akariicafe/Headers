@class NSString, NSArray, CNContactFilter, NSDictionary, NSMutableArray, CNContactStore, NSMapTable, CNContactFormatter;
@protocol CNContactDataSourceDelegate;

@interface CNContactCustomDataSource : NSObject <CNContactChangesObserver, CNContactDataSource>

@property (retain, nonatomic) NSMutableArray *allContacts;
@property (retain, nonatomic) NSArray *keysToFetch;
@property (retain, nonatomic) NSMapTable *identifiersToIndexes;
@property (retain, nonatomic) NSArray *filteredContacts;
@property (nonatomic) BOOL observingContacts;
@property (retain, nonatomic) CNContactFormatter *contactFormatterImpl;
@property (nonatomic) BOOL autoUpdateContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) NSDictionary *contactMatchInfos;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSArray *indexSections;
@property (weak, nonatomic) id<CNContactDataSourceDelegate> delegate;
@property (readonly, nonatomic) BOOL canReload;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) CNContactStore *store;
@property (copy, nonatomic) CNContactFilter *filter;
@property (readonly, nonatomic) CNContactFilter *effectiveFilter;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (readonly, nonatomic) BOOL shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;

- (void)contactDidChange:(id)a0;
- (void)dealloc;
- (id)indexPathForContact:(id)a0;
- (id)completeContactFromContact:(id)a0 fromMainStoreOnly:(BOOL)a1 keysToFetch:(id)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)preferredForNameMeContactIdentifier;
- (void)_sendDataSourceDidChange;
- (void)_startObservingContacts;
- (void)_stopObservingContacts;
- (void)_updateContactsObserving;
- (void)_updateFilter;
- (id)initWithContacts:(id)a0;
- (id)initWithContacts:(id)a0 keysToFetch:(id)a1;
- (id)initWithContacts:(id)a0 keysToFetch:(id)a1 filter:(id)a2;

@end
