@interface _UIAsyncInvocation : NSObject {
    _Atomic void *_observer;
    id /* block */ _invocationBlock;
    _Atomic BOOL _invocationBlockHasBeenCalled;
    _Atomic long long _invokeCallCount;
}

+ (id)invocationWithBlock:(id /* block */)a0;
+ (id)emptyInvocation;

- (void).cxx_destruct;
- (void)dealloc;
- (id)invoke;

@end
