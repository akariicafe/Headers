@class MTObserverStore;

@interface MTSensitiveUIMonitor : NSObject

@property (retain, nonatomic) MTObserverStore *observers;
@property (nonatomic) int notifyToken;
@property (nonatomic) BOOL hideSensitiveUI;
@property (nonatomic) BOOL needPrefsUpdate;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

+ (id)sharedMonitor;

- (BOOL)shouldHideForSensitivity:(long long)a0;
- (void)_handleNotification;
- (BOOL)_hideSensitiveUI;
- (void)addSensitiveUIObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_isVendorRelease;
- (void)registerForNotifications;
- (void)unregisterForNotifications;
- (void)dealloc;
- (void)_withLock:(id /* block */)a0;
- (void)removeSensitiveUIObserver:(id)a0;

@end
