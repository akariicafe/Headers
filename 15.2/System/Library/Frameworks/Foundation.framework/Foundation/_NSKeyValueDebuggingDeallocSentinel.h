@interface _NSKeyValueDebuggingDeallocSentinel : NSObject {
    _Atomic BOOL _isInvalid;
    unsigned long long _objectPointer;
    id /* block */ _callbackBlock;
}

+ (void)_invalidateSentinelWithKey:(void *)a0 fromObject:(id)a1;

- (id)initWithObjectPointer:(unsigned long long)a0 callbackBlock:(id /* block */)a1;
- (void)invalidate;
- (void)dealloc;

@end
