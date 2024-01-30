@interface _KSDeviceStateMonitor : NSObject

@property (nonatomic) BOOL isContentProtectionAvailable;

+ (id)deviceStateMonitor;
+ (BOOL)isRunningOnInternalBuild;

- (BOOL)deviceIsPasswordConfigured;
- (BOOL)deviceHasBeenUnlockedSinceBoot;
- (void)handleKeyBagLockNotification;
- (BOOL)isDataAvailableForClassC;
- (void)dealloc;
- (id)init;

@end
