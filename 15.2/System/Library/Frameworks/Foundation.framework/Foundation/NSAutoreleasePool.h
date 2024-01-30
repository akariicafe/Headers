@interface NSAutoreleasePool : NSObject {
    void *_token;
    void *_reserved3;
    void *_reserved2;
    void *_reserved;
}

+ (void)setPoolCountHighWaterResolution:(unsigned long long)a0;
+ (void)enableFreedObjectCheck:(BOOL)a0;
+ (void)showPools;
+ (unsigned long long)totalAutoreleasedObjects;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)setPoolCountHighWaterMark:(unsigned long long)a0;
+ (unsigned long long)poolCountHighWaterMark;
+ (unsigned long long)poolCountHighWaterResolution;
+ (void)addObject:(id)a0;
+ (BOOL)autoreleasePoolExists;
+ (unsigned long long)autoreleasedObjectCount;
+ (void)enableRelease:(BOOL)a0;
+ (void)resetTotalAutoreleasedObjects;
+ (void)releaseAllPools;
+ (unsigned long long)topAutoreleasePoolCount;

- (unsigned long long)retainCount;
- (id)retain;
- (void)drain;
- (id)autorelease;
- (id)init;
- (void)addObject:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (oneway void)release;

@end
