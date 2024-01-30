@class NSString;

@interface ATXCacheReaderGuardedData : NSObject {
    NSString *_cachePath;
    int _cacheFileDescriptor;
}

- (void).cxx_destruct;
- (id)init;

@end
