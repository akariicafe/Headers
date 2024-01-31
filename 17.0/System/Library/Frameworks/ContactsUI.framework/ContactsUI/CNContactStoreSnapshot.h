@class NSMutableAttributedString, CNManagedConfiguration, NSArray, CNContactStoreFilter, CNContactDataSourceLIFOScheduler, NSMutableDictionary, CNContactStoreDataSource, NSMutableArray, NSObject, NSPointerArray, NSMapTable, CNContactMatchSummarizer;
@protocol OS_dispatch_semaphore;

@interface CNContactStoreSnapshot : NSObject {
    unsigned long long _contactsCount;
    NSMapTable *_contactsCache;
    NSObject<OS_dispatch_semaphore> *_cacheAccessSemaphore;
    struct _NSRange { unsigned long long location; unsigned long long length; } _currentlyLoadingBackgroundRange;
    NSArray *_sections;
    NSArray *_indexSections;
    CNContactMatchSummarizer *_summarizer;
    NSMutableAttributedString *_emptyExcerptInstanceMarker;
    unsigned long long _lastRequestedIndex;
}

@property (weak, nonatomic) CNContactStoreDataSource *dataSource;
@property (retain, nonatomic) CNContactStoreFilter *filter;
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration;
@property (readonly, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) NSMutableDictionary *contactMatchInfos;
@property (readonly, nonatomic) CNContactDataSourceLIFOScheduler *summarizationQueue;
@property (readonly, nonatomic) NSPointerArray *summarizationFutures;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSArray *indexSections;
@property (readonly, nonatomic) NSMapTable *identifiersToIndexPath;
@property (readonly, nonatomic) NSMutableArray *batchContactIdentifiers;

- (id)init;
- (void)dealloc;
- (void)_loadAllContacts;
- (id)objectIn_contactsAtIndex:(unsigned long long)a0;
- (void)prepareAllContacts;
- (void)_loadContactsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inBackground:(BOOL)a1;
- (unsigned long long)countOf_contacts;
- (void)prepareEnoughContacts;
- (id)_keysToFetch;
- (void).cxx_destruct;
- (void)_generateExcerptsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
