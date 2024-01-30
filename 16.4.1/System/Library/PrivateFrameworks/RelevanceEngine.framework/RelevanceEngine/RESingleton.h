@interface RESingleton : NSObject

+ (id)sharedInstance;
+ (id)_classKey;
+ (void)_decrementSingletonCache;
+ (void)_incrementSingletonCache;

- (id)_init;

@end
