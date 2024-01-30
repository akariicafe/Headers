@class NRDeviceCollectionHistory, NSMutableDictionary;

@interface NRRegistryHistoryStore : NRRegistry {
    NSMutableDictionary *_diffIndexObservers;
    int _keyBagStatusChangedNotificationToken;
    NRDeviceCollectionHistory *_history;
}

@property (readonly, nonatomic) NRDeviceCollectionHistory *history;

+ (id)sharedInstance;

- (void)_notifyObserversSecurePropertiesAreAvailableWithCollection:(id)a0 secureProperties:(id)a1;
- (id)addDiffIndexObserverWithWriteBlock:(id /* block */)a0;
- (void)grabHistoryWithReadBlock:(id /* block */)a0;
- (void)grabHistoryWithWriteBlock:(id /* block */)a0;
- (void)removeDiffIndexObserver:(id)a0;
- (void)_notifyDiffIndexObserversWithHistoryEntry:(id)a0 deviceCollection:(id)a1 secureProperties:(id)a2;
- (void)setCollection:(id)a0;
- (id)collection;
- (void)syncGrabHistoryWithReadBlock:(id /* block */)a0;
- (void)syncGrabHistoryWithWriteBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initWithParameters:(id)a0;

@end
