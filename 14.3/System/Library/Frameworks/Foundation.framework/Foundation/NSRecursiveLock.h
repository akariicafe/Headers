@class NSString;

@interface NSRecursiveLock : NSObject <NSLocking> {
    void *_priv;
}

@property (copy) NSString *name;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)tryLock;
- (void)unlock;
- (void)lock;
- (id)init;
- (BOOL)lockBeforeDate:(id)a0;
- (BOOL)isLocking;
- (void)dealloc;
- (id)description;

@end
