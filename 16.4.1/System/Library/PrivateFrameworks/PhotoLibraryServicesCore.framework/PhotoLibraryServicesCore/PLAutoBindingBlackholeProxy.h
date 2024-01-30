@interface PLAutoBindingBlackholeProxy : NSProxy {
    id _targetObject;
}

- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)initWithTargetObject:(id)a0;

@end
