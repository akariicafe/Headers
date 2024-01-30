@interface _PASDeviceState : NSObject

+ (void)runBlockWhenDeviceIsClassCUnlocked:(id /* block */)a0;
+ (BOOL)isUnlocked;
+ (int)lockState;
+ (void)setSystemCallbacks:(const struct _PASDeviceStateSystemCallbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; } *)a0;
+ (void)unregisterForLockStateChangeNotifications:(id)a0;
+ (BOOL)isClassCLocked;
+ (id)registerForLockStateChangeNotifications:(id /* block */)a0;
+ (void)setDefaultSystemCallbacks;
+ (void)runBlockWhenDeviceIsClassCUnlockedWithQoS:(unsigned int)a0 block:(id /* block */)a1;
+ (void)blockUntilFirstUnlock;
+ (id)currentOsBuild;
+ (BOOL)isDeviceFormattedForProtection;

@end
