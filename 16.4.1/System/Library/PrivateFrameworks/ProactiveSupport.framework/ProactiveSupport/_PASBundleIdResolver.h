@class NSString, _PASLock;

@interface _PASBundleIdResolver : NSObject {
    NSString *_exePath;
    _PASLock *_lock;
}

- (id)bundleIdentifierOrProcessName:(BOOL *)a0;
- (id)initWithProcessIdentifier:(int)a0;
- (void).cxx_destruct;
- (void)_populateResultWithLockWitness:(id)a0;

@end
