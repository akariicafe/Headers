@class CARObserverHashTable;

@interface DBBuddyMonitor : NSObject

@property (retain) CARObserverHashTable *observers;
@property (nonatomic) BOOL buddyFinished;

- (void)addObserver:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_updateBuddyFinished;

@end
