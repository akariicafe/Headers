@class NSMutableArray;

@interface TSUDeferredInvocationQueue : NSObject {
    NSMutableArray *_invocations;
    id _target;
}

- (id)prepareWithInvocationTarget:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dealloc;
- (void)performInvocations;

@end
