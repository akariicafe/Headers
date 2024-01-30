@interface TSUWeakProxy : NSProxy

@property (weak, nonatomic) id target;
@property (retain, nonatomic) Class targetClass;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithTarget:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
