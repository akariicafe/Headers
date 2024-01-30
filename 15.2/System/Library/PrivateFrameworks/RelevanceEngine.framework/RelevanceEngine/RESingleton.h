@interface RESingleton : NSObject

+ (id)sharedInstance;
+ (id)_classKey;
+ (void)_incrementSingletonCache;
+ (void)_decrementSingletonCache;

- (id)_init;

@end
