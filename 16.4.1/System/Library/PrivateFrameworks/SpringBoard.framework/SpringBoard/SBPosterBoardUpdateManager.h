@class NSHashTable;

@interface SBPosterBoardUpdateManager : NSObject {
    NSHashTable *_observers;
}

@property (class, readonly, nonatomic) SBPosterBoardUpdateManager *sharedInstance;

- (void)_notifyWillBeginUpdate:(long long)a0;
- (void)_registerForWork:(long long)a0;
- (id)_criteriaForUpdate:(long long)a0;
- (void)addObserver:(id)a0;
- (BOOL)_isXPCActivity:(long long)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)executeUpdate:(long long)a0;
- (id)_xpcActivityNameForUpdate:(long long)a0;
- (void)_unregisterForWork:(long long)a0;
- (void)_notifyDidFinishUpdate:(long long)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)_noteApplicationsChanged:(id)a0;

@end
