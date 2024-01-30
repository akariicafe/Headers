@interface ATDeviceState : NSObject

+ (BOOL)isUnlocked;
+ (BOOL)isClassCLocked;
+ (void)registerBlockForFirstUnlock:(id /* block */)a0;
+ (void)blockUntilFirstUnlock;

@end
