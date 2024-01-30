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

- (BOOL)shouldHideForSensitivity:(long long)a0;
- (void)_handleNotification;
- (BOOL)_hideSensitiveUI;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)initWithCallbackScheduler:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isVendorRelease;
- (void)registerForNotifications;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)unregisterForNotifications;
- (void)dealloc;
- (void)_withLock:(id /* block */)a0;
- (void)overrideHideSensitiveUI:(BOOL)a0;

@end
