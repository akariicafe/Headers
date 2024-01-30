@class NSString, _PASLock;

@interface _PASBundleIdResolver : NSObject {
    NSString *_exePath;
    _PASLock *_lock;
}

- (id)bundleIdentifierOrProcessName:(BOOL *)a0;
- (void)_populateResultWithLockWitness:(id)a0;
- (void).cxx_destruct;
- (id)initWithProcessIdentifier:(int)a0;

@end
