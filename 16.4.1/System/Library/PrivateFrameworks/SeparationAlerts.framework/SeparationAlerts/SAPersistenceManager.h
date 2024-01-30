@class SAPersistenceManagerSettings, SAPersistenceStore, NSHashTable;

@interface SAPersistenceManager : NSObject

@property (retain) SAPersistenceManagerSettings *settings;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) SAPersistenceStore *store;

- (void)_notifyObserversOnWriteToURL:(id)a0 bytes:(unsigned long long)a1;
- (BOOL)load;
- (void)addObserver:(id)a0;
- (BOOL)save;
- (void)removeObserver:(id)a0;
- (id)initWithSettings:(id)a0;
- (BOOL)_createDirectoryIfNotPresent;
- (void)_notifyObserversOnReadFromURL:(id)a0 bytes:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)reset;
- (void)onUpdatedMonitoringSessionRecord:(id)a0;

@end
