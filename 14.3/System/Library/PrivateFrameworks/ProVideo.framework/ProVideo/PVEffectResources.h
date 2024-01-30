@interface PVEffectResources : NSObject

+ (void)setInteractiveMode:(BOOL)a0;
+ (void)applicationWillTerminate;
+ (void)cleanupEffectsCache;
+ (void)flushEngine;
+ (void)shutdownEngine;
+ (void)clearAllCachesAndPools;
+ (void)cleanupEffectsSingletons;
+ (BOOL)isInteractiveMode;
+ (void)updateMemoryEnvironment:(int)a0;
+ (int)memoryEnvironment;
+ (void)setUTObserver:(id)a0;
+ (id)utObserver;

@end
