@class NSHashTable;

@interface SKASystemMonitor : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ivarLock;
@property (nonatomic) BOOL underFirstLock;
@property (retain, nonatomic) NSHashTable *listeners;
@property (readonly, nonatomic) BOOL isUnderFirstDataProtectionLock;

+ (id)logger;
+ (id)sharedInstance;

- (void)removeListener:(id)a0;
- (void)_updateLockState;
- (void)addListener:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_deviceStillUnderFirstLock;
- (void)_listenForKeyBagChangeNotifications;
- (void)_deliverNotificationSelectorToListeners:(SEL)a0;

@end
