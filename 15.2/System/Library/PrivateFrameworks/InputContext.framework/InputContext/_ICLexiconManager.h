@class NSMutableArray, NSArray, NSMutableDictionary, NSObject, _ICNamedEntityStore;
@protocol OS_dispatch_queue;

@interface _ICLexiconManager : NSObject <_ICLexiconManaging, _ICFeedbackAccepting> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _contactsCallbackLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _namedEntityCallbackLock;
    NSArray *_sources;
    NSMutableDictionary *_contacts;
    NSMutableArray *_contactObservers;
    int _contactChangeCount;
}

@property int contactLoadState;
@property int namedEntityLoadState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) _ICNamedEntityStore *namedEntityStore;

+ (unsigned long long)countWords:(id)a0;

- (void)warmUp;
- (void)addContact:(id)a0;
- (void)handleNamedEntity:(id)a0;
- (void)completeContacts;
- (void)removeContact:(id)a0;
- (void)completeRecentContacts;
- (id)loadLexicons:(id /* block */)a0;
- (void)changeNamedEntityLoadingState:(int)a0;
- (unsigned long long)getContactCount;
- (int)debugEntityLoadState;
- (id)stateName:(int)a0;
- (void)changeContactLoadingState:(int)a0;
- (id)loadLexiconsUsingFilter:(id /* block */)a0;
- (void)hibernate;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (void)handleRecentContact:(id)a0;
- (void).cxx_destruct;
- (void)_actuallyLoadLexicons;
- (void)handleRecentNamedEntity:(id)a0;
- (void)setupContacts;
- (void)setupRecentContacts;
- (id)initWithLexiconSources:(id)a0;
- (void)printLexiconToNSLog:(struct _LXLexicon { } *)a0;
- (void)setupNamedEntities;
- (void)setupRecentNamedEntities;
- (void)completeRecentNamedEntities;
- (void)doLoadLexicon;
- (void)unloadLexicons;
- (void)dealloc;
- (id)loadLexicons;
- (void)resetNamedEntities;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (void)completeNamedEntities;
- (void)removeContactObserver:(id /* block */)a0;
- (void)handleContact:(id)a0;

@end
