@class NSMutableArray;

@interface OITSUDeferredInvocationQueue : NSObject {
    NSMutableArray *_invocations;
    id _target;
}

- (id)methodSignatureForSelector:(SEL)a0;
- (id)prepareWithInvocationTarget:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)dealloc;
- (void)performInvocations;

@end
