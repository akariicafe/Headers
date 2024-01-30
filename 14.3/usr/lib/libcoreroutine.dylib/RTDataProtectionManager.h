@class RTDarwinNotificationHelper, RTKeybagMonitor;

@interface RTDataProtectionManager : RTNotifier

@property (retain, nonatomic) RTDarwinNotificationHelper *notificationHelper;
@property (retain, nonatomic) RTKeybagMonitor *keybagMonitor;
@property (nonatomic) long long encryptedDataAvailability;
@property (nonatomic) BOOL unlockedSinceBoot;

+ (id)dataProtectionLockStateToString:(long long)a0;
+ (id)encryptedDataAvailabilityToString:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)handleUnlockedSinceBoot;
- (void)dealloc;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (id)initWithKeybagMonitor:(id)a0 notificationHelper:(id)a1;
- (void)handleKeybagLockStatusChange:(long long)a0;

@end
