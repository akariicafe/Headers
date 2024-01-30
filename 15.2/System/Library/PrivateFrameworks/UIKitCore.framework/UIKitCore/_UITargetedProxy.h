@interface _UITargetedProxy : NSProxy

@property (retain, nonatomic, setter=_setTarget:) id _target;

+ (id)proxyWithTarget:(id)a0;

- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
