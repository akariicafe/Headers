@class NSString;

@interface MFLock : NSLock <MFLockObject> {
    NSString *_name;
    id _delegate;
}

+ (void)initialize;

- (BOOL)tryLock;
- (void)unlock;
- (BOOL)isLockedByMe;
- (void)lock;
- (id)init;
- (BOOL)lockBeforeDate:(id)a0;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)a0 andDelegate:(id)a1;

@end
