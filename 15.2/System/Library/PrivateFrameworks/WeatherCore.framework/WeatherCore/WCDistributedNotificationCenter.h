@class NSHashTable;

@interface WCDistributedNotificationCenter : NSObject

@property (class, readonly, nonatomic) WCDistributedNotificationCenter *defaultCenter;

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dataSynchronizationLock;
@property (retain, nonatomic) NSHashTable *observers;

- (void)postWeatherLocationAuthorizationDidUpdateNotification;
- (void)addObserver:(id)a0;
- (void)_notifyObserversOfPreferencesChange;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)postWeatherSavedLocationsDidUpdateNotification;
- (void)weatherPrefsDidGetUpdated:(id)a0;

@end
