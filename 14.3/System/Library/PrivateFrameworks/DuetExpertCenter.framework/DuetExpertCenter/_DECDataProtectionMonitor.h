@protocol _DECDataProtectionMonitorDelegate;

@interface _DECDataProtectionMonitor : NSObject {
    id<_DECDataProtectionMonitorDelegate> _delegate;
    long long _encryptedDataAvailability;
    BOOL _unlockedSinceBoot;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (weak, nonatomic) id<_DECDataProtectionMonitorDelegate> delegate;
@property (readonly, nonatomic) long long encryptedDataAvailability;
@property (readonly, nonatomic) BOOL unlockedSinceBoot;
@property (readonly, nonatomic) long long dataProtectionStatus;

+ (id)_DECDataProtectionMonitorLockStateToString:(long long)a0;
+ (id)_DECDataProtectionMonitorEncryptedDataAvailabilityToString:(long long)a0;
+ (id)_DECDataProtectionMonitorDataProtectionStatus:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)handleUnlockedSinceBoot;
- (void)setEncryptedDataAvailability:(long long)a0;
- (void)setDataProtectionStatus:(BOOL)a0;
- (void)dealloc;
- (void)handkeKeybagLockStatusChange:(long long)a0;
- (BOOL)dataProtectionEnabled;
- (void)_registerForKeyBagNotifications;
- (void)setUnlockedSinceBoot:(BOOL)a0;

@end
