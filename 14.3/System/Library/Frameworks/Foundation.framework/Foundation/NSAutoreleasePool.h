@interface NSAutoreleasePool : NSObject {
    void *_token;
    void *_reserved3;
    void *_reserved2;
    void *_reserved;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)setPoolCountHighWaterMark:(unsigned long long)a0;
+ (void)setPoolCountHighWaterResolution:(unsigned long long)a0;
+ (unsigned long long)poolCountHighWaterMark;
+ (unsigned long long)poolCountHighWaterResolution;
+ (void)showPools;
+ (void)releaseAllPools;
+ (BOOL)autoreleasePoolExists;
+ (void)addObject:(id)a0;
+ (void)enableRelease:(BOOL)a0;
+ (unsigned long long)topAutoreleasePoolCount;
+ (void)enableFreedObjectCheck:(BOOL)a0;
+ (void)resetTotalAutoreleasedObjects;
+ (unsigned long long)autoreleasedObjectCount;
+ (unsigned long long)totalAutoreleasedObjects;

- (void)drain;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)retain;
- (void)addObject:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;

@end
