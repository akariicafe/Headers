@class _PASLock;

@interface BMStreamsAccessAssertionCache : NSObject {
    _PASLock *_lock;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)init;
- (id)assertionForAccessDescriptor:(id)a0;
- (id)createAssertionForAccessDescriptor:(id)a0 extensionToken:(id)a1;
- (id)_makeAssertionWithDescriptor:(id)a0 extensionToken:(id)a1;

@end
