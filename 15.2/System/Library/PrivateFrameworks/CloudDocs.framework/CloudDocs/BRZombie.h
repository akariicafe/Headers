@interface BRZombie : NSProxy

+ (void)turnObjectIntoZombie:(id)a0;

- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)dealloc;

@end
