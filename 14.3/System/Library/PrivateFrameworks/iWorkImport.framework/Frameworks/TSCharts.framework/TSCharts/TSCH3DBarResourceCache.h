@class TSUNoCopyDictionary;

@interface TSCH3DBarResourceCache : NSObject {
    TSUNoCopyDictionary *mCache;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)instance;
+ (id)_singletonAlloc;
+ (id)barWithExtrusionSetting:(const struct BarExtrusionSetting { float x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x0; float x1; float x2; float x3; int x4; } x0; struct BarExtrusionSpineDetails { float x0; long long x1; long long x2; float x3; } x1; } x5; } *)a0;

- (id)init;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)retain;
- (id)p_barWithExtrusionSetting:(const struct BarExtrusionSetting { float x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x0; float x1; float x2; float x3; int x4; } x0; struct BarExtrusionSpineDetails { float x0; long long x1; long long x2; float x3; } x1; } x5; } *)a0;

@end
