@class NSString;

@interface PPContactDiskCache : NSObject {
    long long _lastCreatedAt;
    NSString *_path;
}

- (id)initWithPath:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)init;
- (id)path;
- (BOOL)iterNameRecordCacheWithError:(id *)a0 block:(id /* block */)a1;
- (id)_cacheObjectFromFilePath:(id)a0 error:(id *)a1;

@end
