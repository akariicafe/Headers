@class NSHashTable;

@interface MTDBExtensionAccess : NSObject {
    NSHashTable *_observers;
    BOOL _hasAttemptedToFix;
}

+ (id)sharedInstance;

- (BOOL)isReady;
- (void)_handleChange;
- (void)addObserver:(id)a0;
- (void)_startObserving;
- (void)_stopObserving;
- (void)dealloc;
- (void)attemptToFix;
- (void)removeObserver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;

@end
