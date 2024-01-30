@class _PASLock;

@interface BMStreamsAccessAssertionCache : NSObject {
    _PASLock *_lock;
}

+ (id)sharedCache;

- (id)init;
- (void).cxx_destruct;
- (id)_makeAssertionWithDescriptor:(id)a0 extensionToken:(id)a1;
- (id)assertionForAccessDescriptor:(id)a0;
- (id)createAssertionForAccessDescriptor:(id)a0 extensionToken:(id)a1;

@end
