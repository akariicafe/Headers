@class NSHashTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WFTemperatureUnitObserver : NSObject

@property (retain) NSObject<OS_dispatch_queue> *temperatureUnitUpdateQueue;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dataSynchronizationLock;
@property (retain) NSMutableDictionary *blockObserversForUUID;
@property (retain) NSHashTable *observerObjects;
@property int userTemperatureUnit;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) int temperatureUnit;

+ (id)sharedObserver;

- (void)removeAllObservers;
- (id)init;
- (void).cxx_destruct;
- (BOOL)removeObserver:(id)a0;
- (void)dealloc;
- (void)q_notifyObserversOfUpdatedTemperatureUnit:(int)a0;
- (void)addObserver:(id)a0;
- (void)_updateTemperatureUnit;
- (id)addBlockObserver:(id /* block */)a0;
- (id)_init;
- (void)q_updateTemperatureUnit;
- (BOOL)removeBlockObserverWithHandle:(id)a0;

@end
