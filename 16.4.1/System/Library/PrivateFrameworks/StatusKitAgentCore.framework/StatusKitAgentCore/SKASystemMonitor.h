@class NSHashTable;

@interface SKASystemMonitor : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ivarLock;
@property (nonatomic) BOOL underFirstLock;
@property (retain, nonatomic) NSHashTable *listeners;
@property (readonly, nonatomic) BOOL isUnderFirstDataProtectionLock;

+ (id)sharedInstance;
+ (id)logger;

- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void)_deliverNotificationSelectorToListeners:(SEL)a0;
- (void)_updateLockState;
- (BOOL)_deviceStillUnderFirstLock;
- (void)_listenForKeyBagChangeNotifications;
- (id)init;
- (void).cxx_destruct;

@end
