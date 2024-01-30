@class NSString;

@interface ICExclusiveLock : NSObject <NSLocking> {
    int _fd;
    NSString *_name;
    NSString *_cachePath;
    NSString *_fullPath;
}

- (BOOL)tryLock;
- (void)unlock;
- (void)setName:(id)a0;
- (void)lock;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)a0 cachePath:(id)a1;
- (id)name;

@end
