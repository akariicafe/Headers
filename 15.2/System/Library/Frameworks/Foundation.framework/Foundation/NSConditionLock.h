@class NSString;

@interface NSConditionLock : NSObject <NSLocking> {
    void *_priv;
}

@property (readonly) long long condition;
@property (copy) NSString *name;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)unlock;
- (BOOL)tryLock;
- (BOOL)lockWhenCondition:(long long)a0 beforeDate:(id)a1;
- (void)lock;
- (id)initWithCondition:(long long)a0;
- (BOOL)tryLockWhenCondition:(long long)a0;
- (id)description;
- (id)init;
- (BOOL)lockBeforeDate:(id)a0;
- (void)unlockWithCondition:(long long)a0;
- (void)dealloc;
- (void)lockWhenCondition:(long long)a0;

@end
