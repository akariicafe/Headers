@interface NSAutoreleasePool : NSObject {
    void *_token;
    void *_reserved3;
    void *_reserved2;
    void *_reserved;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)addObject:(id)a0;
+ (unsigned long long)topAutoreleasePoolCount;
+ (void)enableFreedObjectCheck:(BOOL)a0;
+ (void)setPoolCountHighWaterMark:(unsigned long long)a0;
+ (void)enableRelease:(BOOL)a0;
+ (unsigned long long)autoreleasedObjectCount;
+ (unsigned long long)poolCountHighWaterMark;
+ (void)resetTotalAutoreleasedObjects;
+ (unsigned long long)totalAutoreleasedObjects;
+ (BOOL)autoreleasePoolExists;
+ (void)setPoolCountHighWaterResolution:(unsigned long long)a0;
+ (void)showPools;
+ (unsigned long long)poolCountHighWaterResolution;
+ (void)releaseAllPools;

- (id)retain;
- (void)addObject:(id)a0;
- (oneway void)release;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (void)drain;
- (id)init;
- (id)autorelease;
- (unsigned long long)retainCount;

@end
