@class NSNumber, NSString, HKSPObserverSet;

@interface HDSPDeviceUnlockMonitor : NSObject <HDSPNotificationObserver>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } monitorLock;
@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (retain, nonatomic) NSNumber *overrideDeviceHasBeenUnlockedSinceBoot;
@property (readonly, nonatomic) BOOL hasBeenUnlockedSinceBoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCallbackScheduler:(id)a0;
- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (void)addObserver:(id)a0;
- (void)handleFirstUnlock;
- (void)_withLock:(id /* block */)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_latestKeyBagValueForHasBeenUnlockedSinceBoot;

@end
