@class NSMutableDictionary;

@interface PCUserDefaultsBroadcaster : NSObject {
    NSMutableDictionary *_userDefaultsBroadcasted;
}

+ (id)sharedInstance;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)observersForUserDefault:(id)a0;
- (void)removeObserver:(id)a0 forUserDefault:(id)a1 fromObservers:(id)a2;
- (BOOL)isWeakReferenceHashTableEmpty:(id)a0;
- (void)removeObserversForUserDefault:(id)a0;
- (void)addObserver:(id)a0 ofUserDefaults:(id)a1;
- (void)removeObserver:(id)a0 ofUserDefaults:(id)a1;
- (BOOL)hasObserversOfUserDefault:(id)a0;

@end
