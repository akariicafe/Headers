@interface JEUnfairLock : NSObject <NSLocking> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
}

+ (void)initialize;

- (void)lock;
- (void)unlock;
- (id)init;

@end
