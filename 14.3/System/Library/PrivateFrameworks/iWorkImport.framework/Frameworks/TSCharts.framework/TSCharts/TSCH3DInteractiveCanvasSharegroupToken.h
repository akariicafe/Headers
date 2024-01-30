@interface TSCH3DInteractiveCanvasSharegroupToken : TSCH3DCachedSharegroupToken

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (id)token;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canBeCreatedFromOtherThread;
- (BOOL)shouldClearCurrentContextOnOwnerChange;
- (BOOL)shouldGarbageCollect;
- (BOOL)hasInterestForDiscreteGraphics;

@end
