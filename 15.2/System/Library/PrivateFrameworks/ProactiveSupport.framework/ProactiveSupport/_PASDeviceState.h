@interface _PASDeviceState : NSObject

+ (BOOL)isUnlocked;
+ (int)lockState;
+ (void)setSystemCallbacks:(const struct _PASDeviceStateSystemCallbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; } *)a0;
+ (void)runBlockWhenDeviceIsClassCUnlocked:(id /* block */)a0;
+ (void)blockUntilFirstUnlock;
+ (id)registerForLockStateChangeNotifications:(id /* block */)a0;
+ (id)currentOsBuild;
+ (void)setDefaultSystemCallbacks;
+ (BOOL)isDeviceFormattedForProtection;
+ (BOOL)isClassCLocked;
+ (void)unregisterForLockStateChangeNotifications:(id)a0;
+ (void)runBlockWhenDeviceIsClassCUnlockedWithQoS:(unsigned int)a0 block:(id /* block */)a1;

@end
