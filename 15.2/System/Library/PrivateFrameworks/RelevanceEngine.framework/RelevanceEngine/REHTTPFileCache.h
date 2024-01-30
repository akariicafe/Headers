@class NSString, NSCache;

@interface REHTTPFileCache : NSObject {
    NSString *_directory;
    NSCache *_cache;
}

- (void).cxx_destruct;
- (id)initWithRootDirectory:(id)a0;
- (id)loadFileAtPath:(id)a0;

@end
