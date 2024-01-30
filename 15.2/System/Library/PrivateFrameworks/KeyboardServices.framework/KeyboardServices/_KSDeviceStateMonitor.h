@interface _KSDeviceStateMonitor : NSObject

@property (nonatomic) BOOL isContentProtectionAvailable;

+ (id)deviceStateMonitor;
+ (BOOL)isRunningOnInternalBuild;

- (BOOL)deviceIsPasswordConfigured;
- (BOOL)deviceHasBeenUnlockedSinceBoot;
- (id)init;
- (void)dealloc;
- (BOOL)isDataAvailableForClassC;
- (void)handleKeyBagLockNotification;

@end
