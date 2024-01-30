@interface ISInvocationRecorder : NSObject {
    id _target;
}

- (id)initWithTarget:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dealloc;
- (void)invokeInvocation:(id)a0;
- (id)adjustedTargetForSelector:(SEL)a0;

@end
