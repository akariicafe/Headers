@class TSPDocumentResourceRegistry;

@interface TSPDocumentResourceCache : TSPFileResourceCache {
    TSPDocumentResourceRegistry *_documentResourceRegistry;
}

+ (id)sharedCache;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)fileURLForResourceInfo:(id)a0;
- (id)fileURLInCacheForResourceInfo:(id)a0;
- (id)initWithURL:(id)a0 documentResourceRegistry:(id)a1;
- (void)purgeLegacyCaches;

@end
