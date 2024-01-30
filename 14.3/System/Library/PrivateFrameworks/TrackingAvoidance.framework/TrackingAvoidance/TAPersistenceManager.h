@class TAPersistenceManagerSettings, TAPersistenceStore, NSHashTable;

@interface TAPersistenceManager : NSObject

@property (retain) TAPersistenceManagerSettings *settings;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) TAPersistenceStore *store;

- (id)initWithSettings:(id)a0;
- (BOOL)load;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (BOOL)reset;
- (BOOL)save;
- (void)addObserver:(id)a0;
- (BOOL)_createDirectoryIfNotPresent;
- (void)_notifyObserversOnReadFromURL:(id)a0 bytes:(unsigned long long)a1;
- (void)_notifyObserversOnWriteToURL:(id)a0 bytes:(unsigned long long)a1;
- (void)onUpdatedTAStore:(id)a0;

@end
