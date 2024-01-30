@class NSString;

@interface MFLock : NSLock <MFLockObject> {
    NSString *_name;
    id _delegate;
}

+ (void)initialize;

- (void)unlock;
- (BOOL)tryLock;
- (void)lock;
- (id)description;
- (id)init;
- (BOOL)lockBeforeDate:(id)a0;
- (BOOL)isLockedByMe;
- (void)dealloc;
- (id)initWithName:(id)a0 andDelegate:(id)a1;

@end
