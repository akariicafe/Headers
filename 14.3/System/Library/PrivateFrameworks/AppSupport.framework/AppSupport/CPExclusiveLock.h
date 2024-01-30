@class NSString;

@interface CPExclusiveLock : NSObject <NSLocking> {
    int _fd;
    NSString *_name;
}

- (BOOL)tryLock;
- (void)unlock;
- (void)setName:(id)a0;
- (void)lock;
- (id)init;
- (void)dealloc;
- (id)name;
- (id)initWithName:(id)a0;

@end
