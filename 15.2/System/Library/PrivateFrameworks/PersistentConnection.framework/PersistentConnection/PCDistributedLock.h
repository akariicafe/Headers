@class NSString;

@interface PCDistributedLock : NSObject <NSLocking> {
    NSString *_path;
    int _fd;
}

- (void)unlock;
- (id)initWithPath:(id)a0;
- (BOOL)tryLock;
- (void)lock;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)dealloc;
- (BOOL)_lockBlocking:(BOOL)a0;

@end
