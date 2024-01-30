@interface ATDeviceState : NSObject

+ (void)registerBlockForFirstUnlock:(id /* block */)a0;
+ (BOOL)isUnlocked;
+ (BOOL)isClassCLocked;
+ (void)blockUntilFirstUnlock;

@end
