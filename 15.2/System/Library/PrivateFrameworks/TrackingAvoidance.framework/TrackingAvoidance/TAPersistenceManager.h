@class TAPersistenceManagerSettings, TAPersistenceStore, NSHashTable;

@interface TAPersistenceManager : NSObject

@property (retain) TAPersistenceManagerSettings *settings;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) TAPersistenceStore *store;

- (BOOL)save;
- (BOOL)_createDirectoryIfNotPresent;
- (id)initWithSettings:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)_notifyObserversOnWriteToURL:(id)a0 bytes:(unsigned long long)a1;
- (void)_notifyObserversOnReadFromURL:(id)a0 bytes:(unsigned long long)a1;
- (BOOL)load;
- (void)onUpdatedTAStore:(id)a0;
- (BOOL)reset;

@end
