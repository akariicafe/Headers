@class NSString;

@interface MFConditionLock : NSConditionLock <MFLockObject> {
    NSString *_name;
    id _delegate;
}

+ (void)initialize;

- (void)unlock;
- (BOOL)lockWhenCondition:(long long)a0 beforeDate:(id)a1;
- (id)description;
- (id)init;
- (BOOL)lockBeforeDate:(id)a0;
- (BOOL)isLockedByMe;
- (void)unlockWithCondition:(long long)a0;
- (void)dealloc;
- (id)initWithName:(id)a0 andDelegate:(id)a1;
- (id)initWithName:(id)a0 condition:(long long)a1 andDelegate:(id)a2;

@end
