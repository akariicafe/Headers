@class NSCache;

@interface QLThumbnailAdditionCache : NSObject {
    NSCache *_additionsCache;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)cacheAddition:(id)a0 forDocumentID:(id)a1;
- (id)thumbnailAdditionForItemAtURL:(id)a0 error:(id *)a1;
- (void)purgeCachedAdditionForItemAtURL:(id)a0;

@end
