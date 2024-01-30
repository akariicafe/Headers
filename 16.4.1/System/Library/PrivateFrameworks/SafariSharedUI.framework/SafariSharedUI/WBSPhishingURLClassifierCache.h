@class NSCache;
@protocol WBSPhishingURLClassifier;

@interface WBSPhishingURLClassifierCache : NSObject <WBSPhishingURLClassifier> {
    NSCache *_cache;
}

@property (readonly, nonatomic) id<WBSPhishingURLClassifier> urlClassifier;

- (void)clearCache;
- (void).cxx_destruct;
- (void)cacheClassification:(unsigned long long)a0 forURL:(id)a1;
- (void)classifyURL:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)initWithURLClassifier:(id)a0;

@end
