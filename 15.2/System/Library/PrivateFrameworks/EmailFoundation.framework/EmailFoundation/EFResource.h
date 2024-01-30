@interface EFResource : NSObject <NSLocking> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfair_lock;
    _Atomic long long _lockCount;
}

- (void)unlock;
- (void)lock;
- (void)holdResource;
- (BOOL)returnResource;
- (id)init;

@end
