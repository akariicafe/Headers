@class MTObserverStore;

@interface MTSensitiveUIMonitor : NSObject

@property (retain, nonatomic) MTObserverStore *observers;
@property (nonatomic) int notifyToken;
@property (nonatomic) BOOL hideSensitiveUI;
@property (nonatomic) BOOL needPrefsUpdate;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

+ (id)sharedMonitor;

- (BOOL)_hideSensitiveUI;
- (void)registerForNotifications;
- (void)addSensitiveUIObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unregisterForNotifications;
- (void)_handleNotification;
- (void)_withLock:(id /* block */)a0;
- (BOOL)shouldHideForSensitivity:(long long)a0;
- (BOOL)_isVendorRelease;
- (void)removeSensitiveUIObserver:(id)a0;

@end
