@class NSString;

@interface NSRecursiveLock : NSObject <NSLocking> {
    void *_priv;
}

@property (copy) NSString *name;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)unlock;
- (BOOL)isLocking;
- (BOOL)tryLock;
- (void)lock;
- (id)description;
- (id)init;
- (BOOL)lockBeforeDate:(id)a0;
- (void)dealloc;

@end
