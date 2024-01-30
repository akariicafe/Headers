@class NSString;

@interface PPContactDiskCache : NSObject {
    long long _lastCreatedAt;
    NSString *_path;
}

- (id)initWithPath:(id)a0;
- (id)_cacheObjectFromFilePath:(id)a0 error:(id *)a1;
- (id)path;
- (BOOL)isEmpty;
- (id)init;
- (void).cxx_destruct;
- (BOOL)iterNameRecordCacheWithError:(id *)a0 block:(id /* block */)a1;

@end
