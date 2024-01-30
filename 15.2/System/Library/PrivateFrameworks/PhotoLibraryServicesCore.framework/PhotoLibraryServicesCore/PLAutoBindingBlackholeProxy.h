@interface PLAutoBindingBlackholeProxy : NSProxy {
    id _targetObject;
}

- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithTargetObject:(id)a0;

@end
