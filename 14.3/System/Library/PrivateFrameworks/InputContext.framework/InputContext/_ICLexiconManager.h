@class _ICNamedEntityStore, NSArray, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface _ICLexiconManager : NSObject <_ICLexiconManaging, _ICFeedbackAccepting> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _contactsCallbackLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _namedEntityCallbackLock;
    NSArray *_sources;
    NSMutableDictionary *_contacts;
    NSMutableArray *_contactObservers;
    int _contactChangeCount;
    _ICNamedEntityStore *_namedEntityStore;
}

@property int contactLoadState;
@property int namedEntityLoadState;

+ (unsigned long long)countWords:(id)a0;

- (void)warmUp;
- (id)loadLexicons:(id /* block */)a0;
- (id)initWithLexiconSources:(id)a0;
- (void)addContact:(id)a0;
- (void).cxx_destruct;
- (void)completeRecentContacts;
- (int)debugEntityLoadState;
- (void)dealloc;
- (void)setupRecentContacts;
- (void)setupNamedEntities;
- (void)completeContacts;
- (void)hibernate;
- (void)handleRecentContact:(id)a0;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (void)unloadLexicons;
- (id)loadLexiconsUsingFilter:(id /* block */)a0;
- (void)handleContact:(id)a0;
- (void)printLexiconToNSLog:(struct _LXLexicon { } *)a0;
- (void)changeNamedEntityLoadingState:(int)a0;
- (void)setupContacts;
- (void)completeRecentNamedEntities;
- (void)setupRecentNamedEntities;
- (void)removeContact:(id)a0;
- (void)changeContactLoadingState:(int)a0;
- (void)completeNamedEntities;
- (void)handleRecentNamedEntity:(id)a0;
- (void)handleNamedEntity:(id)a0;
- (void)resetNamedEntities;
- (void)doLoadLexicon;
- (unsigned long long)getContactCount;
- (void)backgroundLoadLexiconsUsingFilter:(id /* block */)a0;
- (void)removeContactObserver:(id /* block */)a0;
- (id)stateName:(int)a0;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;

@end
