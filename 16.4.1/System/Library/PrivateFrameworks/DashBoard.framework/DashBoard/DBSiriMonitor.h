@class CARObserverHashTable;

@interface DBSiriMonitor : NSObject

@property (retain) CARObserverHashTable *observers;
@property (nonatomic) BOOL siriEnabled;

- (void)addObserver:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)handleAssistantLanguageChanged:(id)a0;
- (void)_updateSiriEnabled;
- (void)handleAssistantPreferencesChanged:(id)a0;

@end
