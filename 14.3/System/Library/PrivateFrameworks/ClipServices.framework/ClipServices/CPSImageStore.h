@interface CPSImageStore : NSObject

+ (id)keyForImageURL:(id)a0 error:(id *)a1;
+ (id)_storeDirectoryURL:(id *)a0;
+ (id)keyForMapsCategoryID:(id)a0 error:(id *)a1;
+ (id)keyForGEOStyleAttributes:(id)a0 error:(id *)a1;
+ (id)keyForPOIMuid:(unsigned long long)a0 error:(id *)a1;

- (id)storeImageData:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)_purgeOldFilesInDirectory:(id)a0 timeToLive:(double)a1;
- (id)storedImageForKey:(id)a0;
- (void)purgeOldImagesWithCompletionHandler:(id /* block */)a0;
- (void)test_purgeOldFilesInDirectory:(id)a0 timeToLive:(double)a1;

@end
