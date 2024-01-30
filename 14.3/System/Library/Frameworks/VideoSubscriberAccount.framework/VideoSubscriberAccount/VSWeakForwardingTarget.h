@interface VSWeakForwardingTarget : NSObject

@property (weak, nonatomic) id object;

- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;

@end
