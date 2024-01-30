@class NSString;

@interface ATXGenericFileBasedCache : NSObject {
    NSString *_cacheFilePath;
}

- (id)initWithCacheFilePath:(id)a0;
- (BOOL)storeData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)readWithMaxValidAge:(double)a0 unlink:(BOOL)a1 cacheDataOut:(id *)a2 cacheAgeOut:(double *)a3;

@end
