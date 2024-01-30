@interface TSCH3DSceneRenderViewportSetup : TSCH3DSceneRenderSetup

+ (id)setup;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setupPipeline:(id)a0 fromCamera:(id)a1;

@end
