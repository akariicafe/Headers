@class Protocol;

@interface SUResponderChainInvocationRecorder : ISInvocationRecorder {
    Protocol *_protocol;
}

- (id)methodSignatureForSelector:(SEL)a0;
- (void)invokeInvocation:(id)a0;
- (id)initWithTarget:(id)a0 protocol:(id)a1;
- (id)_targetForSelector:(SEL)a0 sender:(id)a1;
- (id)adjustedTargetForSelector:(SEL)a0;

@end
