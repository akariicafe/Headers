@interface _DECDeviceState : NSObject

+ (BOOL)isUnlocked;
+ (BOOL)isDemoModeEnabled;
+ (void)blockUntilFirstUnlock;
+ (void)registerBlockForFirstUnlock:(id /* block */)a0;
+ (BOOL)isClassCLocked;
+ (void)registerBlockForFirstUnlock:(id /* block */)a0 executeIfUnlocked:(BOOL)a1;

@end
