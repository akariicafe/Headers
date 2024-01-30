@interface ISInvocationRecorder : NSObject {
    id _target;
}

- (id)initWithTarget:(id)a0;
- (void)invokeInvocation:(id)a0;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)init;
- (void)forwardInvocation:(id)a0;
- (id)adjustedTargetForSelector:(SEL)a0;

@end
