@interface TSCH3DSceneRenderSceneTransformSetup : TSCH3DSceneRenderSetup

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)setup;
+ (id)_singletonAlloc;

- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (void)setupPipeline:(id)a0 fromCamera:(id)a1;

@end
