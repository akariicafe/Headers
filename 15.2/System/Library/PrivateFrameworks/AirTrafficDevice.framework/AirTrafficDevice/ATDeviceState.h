@interface ATDeviceState : NSObject

+ (BOOL)isUnlocked;
+ (void)blockUntilFirstUnlock;
+ (void)registerBlockForFirstUnlock:(id /* block */)a0;
+ (BOOL)isClassCLocked;

@end
