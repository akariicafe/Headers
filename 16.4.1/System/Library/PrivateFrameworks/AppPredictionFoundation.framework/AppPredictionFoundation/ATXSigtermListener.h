@class NSHashTable;

@interface ATXSigtermListener : NSObject {
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (void)registerObserver:(id)a0;
- (void)_notifyObserversOfSigterm;
- (void)unregisterObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
