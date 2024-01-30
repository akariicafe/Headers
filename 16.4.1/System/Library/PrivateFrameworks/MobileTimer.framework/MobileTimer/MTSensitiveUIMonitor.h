@class MTObserverStore;

@interface MTSensitiveUIMonitor : NSObject

@property (retain, nonatomic) MTObserverStore *observers;
@property (nonatomic) int notifyToken;
@property (nonatomic) BOOL hideSensitiveUI;
@property (nonatomic) BOOL needPrefsUpdate;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

+ (id)sharedMonitor;

- (BOOL)_hideSensitiveUI;
- (void)_withLock:(id /* block */)a0;
- (BOOL)_isVendorRelease;
- (void)_handleNotification;
- (BOOL)shouldHideForSensitivity:(long long)a0;
- (void)dealloc;
- (void)removeSensitiveUIObserver:(id)a0;
- (void)registerForNotifications;
- (id)init;
- (void).cxx_destruct;
- (void)unregisterForNotifications;
- (void)addSensitiveUIObserver:(id)a0;

@end
