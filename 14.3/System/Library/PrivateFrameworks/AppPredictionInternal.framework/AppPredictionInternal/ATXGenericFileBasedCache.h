@class NSString;

@interface ATXGenericFileBasedCache : NSObject {
    NSString *_cacheFilePath;
}

- (id)init;
- (void).cxx_destruct;
- (void)readWithMaxValidAge:(double)a0 unlink:(BOOL)a1 cacheDataOut:(id *)a2 cacheAgeOut:(double *)a3;
- (BOOL)storeData:(id)a0;
- (id)initWithCacheFilePath:(id)a0;

@end
