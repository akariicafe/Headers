@class NSString;

@interface ICExclusiveLock : NSObject <NSLocking> {
    int _fd;
    NSString *_name;
    NSString *_cachePath;
    NSString *_fullPath;
}

- (void)lock;
- (id)initWithName:(id)a0 cachePath:(id)a1;
- (void)unlock;
- (BOOL)tryLock;
- (void)dealloc;
- (id)init;
- (void)setName:(id)a0;
- (void).cxx_destruct;
- (id)name;

@end
