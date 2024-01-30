@class NSString;

@interface CPExclusiveLock : NSObject <NSLocking> {
    int _fd;
    NSString *_name;
}

- (void)unlock;
- (BOOL)tryLock;
- (void)lock;
- (void)setName:(id)a0;
- (id)initWithName:(id)a0;
- (id)init;
- (id)name;
- (void)dealloc;

@end
