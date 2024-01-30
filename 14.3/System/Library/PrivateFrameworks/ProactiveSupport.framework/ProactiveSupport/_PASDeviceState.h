@interface _PASDeviceState : NSObject

+ (void)setSystemCallbacks:(const struct _PASDeviceStateSystemCallbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; } *)a0;
+ (void)unregisterForLockStateChangeNotifications:(id)a0;
+ (void)setDefaultSystemCallbacks;
+ (BOOL)isUnlocked;
+ (id)currentOsBuild;
+ (BOOL)isClassCLocked;
+ (void)blockUntilFirstUnlock;
+ (void)runBlockWhenDeviceIsClassCUnlocked:(id /* block */)a0;
+ (id)registerForLockStateChangeNotifications:(id /* block */)a0;
+ (BOOL)isDeviceFormattedForProtection;
+ (int)lockState;

@end
