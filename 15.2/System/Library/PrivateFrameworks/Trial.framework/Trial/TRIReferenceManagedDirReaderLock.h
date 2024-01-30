@class NSString, _PASLock;

@interface TRIReferenceManagedDirReaderLock : NSObject {
    NSString *_dir;
    _PASLock *_lock;
}

- (void)unlock;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDir:(id)a0;
- (void)dealloc;

@end
