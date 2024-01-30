@class NSString;

@interface ICExclusiveLock : NSObject <NSLocking> {
    int _fd;
    NSString *_name;
    NSString *_cachePath;
    NSString *_fullPath;
}

- (void)unlock;
- (BOOL)tryLock;
- (id)initWithName:(id)a0 cachePath:(id)a1;
- (void)lock;
- (void)setName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)name;
- (void)dealloc;

@end
