@class _PASLock, NSString, NSObject;
@protocol OS_dispatch_source;

@interface ATXCacheReader : NSObject {
    _PASLock *_lock;
    NSString *_cacheBasePath;
    NSObject<OS_dispatch_source> *_vnodeSource;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleDirChange;
- (id)readCacheFileForConsumerSubtype:(unsigned char)a0;
- (id)initWithCacheBasePath:(id)a0;
- (id)readCacheFileForCachePath:(id)a0;

@end
