@protocol WBSPhishingURLClassifier;

@interface WBSPhishingURLClassifierWithFallback : NSObject <WBSPhishingURLClassifier>

@property (readonly, nonatomic) id<WBSPhishingURLClassifier> urlClassifier;
@property (readonly, nonatomic) id<WBSPhishingURLClassifier> fallbackClassifier;

+ (id)buildChain:(id)a0;

- (void).cxx_destruct;
- (id)initWithURLClassifier:(id)a0 fallback:(id)a1;
- (void)classifyURL:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
