@interface BootArgs : NSObject

+ (id)numberForKey:(id)a0;
+ (long long)integerForKey:(id)a0;
+ (BOOL)boolForKey:(id)a0;
+ (id)stringForKey:(id)a0;
+ (int)intForKey:(id)a0;
+ (id)configuredBootArgs;
+ (id)configuredBootArgsString;

- (id)init;

@end
