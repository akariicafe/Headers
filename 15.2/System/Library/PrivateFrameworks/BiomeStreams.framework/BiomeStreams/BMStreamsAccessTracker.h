@class _PASLock;

@interface BMStreamsAccessTracker : NSObject {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)logMissingEntitlementsForAccess:(id)a0;
- (BOOL)checkAccess:(id)a0;
- (void)_logMissingEntitlementsForAccess:(id)a0;
- (BOOL)_checkAccess:(id)a0;
- (BOOL)_sandboxCheck:(const char *)a0 path:(const char *)a1;

@end
