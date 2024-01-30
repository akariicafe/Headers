@interface _DECDeviceState : NSObject

+ (void)registerBlockForFirstUnlock:(id /* block */)a0;
+ (BOOL)isDemoModeEnabled;
+ (BOOL)isUnlocked;
+ (BOOL)isClassCLocked;
+ (void)blockUntilFirstUnlock;
+ (void)registerBlockForFirstUnlock:(id /* block */)a0 executeIfUnlocked:(BOOL)a1;

@end
