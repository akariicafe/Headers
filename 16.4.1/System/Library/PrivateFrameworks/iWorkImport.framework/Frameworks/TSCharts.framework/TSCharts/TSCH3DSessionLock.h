@interface TSCH3DSessionLock : NSObject

+ (void)performBlockWithSession:(id)a0 block:(id /* block */)a1;
+ (void)performBlockWithSession:(id)a0 renderingContext:(id)a1 block:(id /* block */)a2;
+ (void)performBlockWithSession:(id)a0 renderingContext:(id)a1 shouldUpdateContextVirtualScreen:(BOOL)a2 block:(id /* block */)a3;

@end
