@class NPSManager, NSUserDefaults, HKSPObserverSet;

@interface HKSPSensitiveUIMonitor : NSObject

@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) NPSManager *npsManager;
@property (readonly, nonatomic) BOOL sensitiveUIOverridden;
@property (readonly, nonatomic) BOOL hideSensitiveUI;
@property (readonly, nonatomic) BOOL needPrefsUpdate;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic, getter=isCurrentSensitiveUIHidden) BOOL currentSensitiveUIHidden;

+ (id)sharedMonitor;

- (BOOL)_hideSensitiveUI;
- (id)initWithCallbackScheduler:(id)a0;
- (void)registerForNotifications;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)unregisterForNotifications;
- (void)_handleNotification;
- (void)overrideHideSensitiveUI:(BOOL)a0;
- (void)_withLock:(id /* block */)a0;
- (BOOL)shouldHideForSensitivity:(long long)a0;
- (BOOL)_isVendorRelease;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
