@class NSString;

@interface PCDistributedLock : NSObject <NSLocking> {
    NSString *_path;
    int _fd;
}

- (id)initWithPath:(id)a0;
- (id)initWithName:(id)a0;
- (void)lock;
- (void)unlock;
- (BOOL)tryLock;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_lockBlocking:(BOOL)a0;

@end
