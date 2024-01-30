@class NSMutableArray;

@interface TSUDeferredInvocationQueue : NSObject {
    NSMutableArray *_invocations;
    id _target;
}

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)prepareWithInvocationTarget:(id)a0;
- (void)performInvocations;

@end
