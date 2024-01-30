@interface TSCH3DSharegroupToken : NSObject

+ (id)sharegroupPool;
+ (id)interactiveCanvas;
+ (id)sharegroupMapWithDevice:(id)a0;
+ (id)glExport;

- (BOOL)isOneShot;
- (BOOL)mustRunOnMainThread;
- (BOOL)canBeCreatedFromOtherThread;
- (id)targetThreadForFlushingWithOwningThread:(id)a0;
- (BOOL)shouldClearCurrentContextOnOwnerChange;
- (BOOL)shouldGarbageCollect;
- (BOOL)forceGL;
- (BOOL)hasInterestForDiscreteGraphics;

@end
