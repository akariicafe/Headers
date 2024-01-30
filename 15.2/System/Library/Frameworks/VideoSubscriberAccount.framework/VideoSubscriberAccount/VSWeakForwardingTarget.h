@interface VSWeakForwardingTarget : NSObject

@property (weak, nonatomic) id object;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;

@end
