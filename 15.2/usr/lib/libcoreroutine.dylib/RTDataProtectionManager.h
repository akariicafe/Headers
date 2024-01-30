@class RTDarwinNotificationHelper, RTKeybagMonitor;

@interface RTDataProtectionManager : RTService

@property (retain, nonatomic) RTDarwinNotificationHelper *notificationHelper;
@property (retain, nonatomic) RTKeybagMonitor *keybagMonitor;
@property (nonatomic) long long encryptedDataAvailability;
@property (nonatomic) BOOL unlockedSinceBoot;

+ (id)encryptedDataAvailabilityToString:(long long)a0;
+ (id)dataProtectionLockStateToString:(long long)a0;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)handleUnlockedSinceBoot;
- (void)handleKeybagLockStatusChange:(long long)a0;
- (void)dealloc;
- (id)initWithKeybagMonitor:(id)a0 notificationHelper:(id)a1;

@end
