@interface TSUWeakProxy : NSProxy

@property (weak, nonatomic) id target;
@property (retain, nonatomic) Class targetClass;

- (id)initWithTarget:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;

@end
