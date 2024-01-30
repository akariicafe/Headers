@class AVFlashlight, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface SBUIFlashlightController : NSObject {
    AVFlashlight *_flashlight;
    NSObject<OS_dispatch_queue> *_flashlightQueue;
    unsigned long long _level;
    NSHashTable *_observers;
}

@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, nonatomic, getter=isOverheated) BOOL overheated;
@property (nonatomic) unsigned long long level;

+ (id)sharedInstance;

- (void)warmUp;
- (unsigned long long)_loadFlashlightLevel;
- (void)_postOverheatedChangeNotification:(BOOL)a0;
- (void)_turnPowerOff;
- (void)coolDown;
- (void)_storeFlashlightLevel:(unsigned long long)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_updateStateWithAvailable:(BOOL)a0 level:(unsigned long long)a1 overheated:(BOOL)a2;
- (void)_setFlashlightLevel:(float)a0;
- (void)removeAllObservers;
- (void).cxx_destruct;
- (id)init;
- (void)_postLevelChangeNotification:(unsigned long long)a0;
- (void)turnFlashlightOffForReason:(id)a0;
- (void)turnFlashlightOnForReason:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_postAvailabilityChangeNotification:(BOOL)a0;
- (void)_turnPowerOn;

@end
