@class NSString, SGKeyValueCacheFile;

@interface SGDetailCacheSnapshot : NSObject {
    SGKeyValueCacheFile *_phoneCache;
    SGKeyValueCacheFile *_emailCache;
    NSString *_maybeFormat;
}

- (void).cxx_destruct;

@end
