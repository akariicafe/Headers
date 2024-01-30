@class SAPersistenceManagerSettings, SAPersistenceStore, NSHashTable;

@interface SAPersistenceManager : NSObject

@property (retain) SAPersistenceManagerSettings *settings;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) SAPersistenceStore *store;

- (BOOL)save;
- (BOOL)_createDirectoryIfNotPresent;
- (id)initWithSettings:(id)a0;
- (void)onUpdatedMonitoringSessionRecord:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)_notifyObserversOnWriteToURL:(id)a0 bytes:(unsigned long long)a1;
- (void)_notifyObserversOnReadFromURL:(id)a0 bytes:(unsigned long long)a1;
- (BOOL)load;
- (BOOL)reset;

@end
