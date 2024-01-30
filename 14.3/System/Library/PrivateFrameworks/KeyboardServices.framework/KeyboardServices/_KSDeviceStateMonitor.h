@interface _KSDeviceStateMonitor : NSObject

@property (nonatomic) BOOL isContentProtectionAvailable;

+ (id)deviceStateMonitor;
+ (BOOL)isRunningOnInternalBuild;

- (id)init;
- (void)dealloc;
- (BOOL)deviceIsPasswordConfigured;
- (BOOL)isDataAvailableForClassC;
- (BOOL)deviceHasBeenUnlockedSinceBoot;
- (void)handleKeyBagLockNotification;

@end
