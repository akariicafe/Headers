@class NSCache;

@interface QLThumbnailAdditionCache : NSObject {
    NSCache *_additionsCache;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)cacheAddition:(id)a0 forDocumentID:(id)a1;
- (void)purgeCachedAdditionForItemAtURL:(id)a0;
- (id)thumbnailAdditionForItemAtURL:(id)a0 error:(id *)a1;

@end
