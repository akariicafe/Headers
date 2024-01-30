@class NSString;

@interface MFLock : NSLock <MFLockObject> {
    NSString *_name;
    id _delegate;
}

+ (void)initialize;

- (BOOL)isLockedByMe;
- (void)lock;
- (void)unlock;
- (BOOL)tryLock;
- (BOOL)lockBeforeDate:(id)a0;
- (id)initWithName:(id)a0 andDelegate:(id)a1;
- (void)dealloc;
- (id)init;
- (id)description;

@end
