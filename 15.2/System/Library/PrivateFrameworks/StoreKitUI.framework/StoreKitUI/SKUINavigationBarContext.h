@class SKUIClientContext, NSOperationQueue, SKUIResourceLoader, SKUILayoutCache, UIViewController;

@interface SKUINavigationBarContext : NSObject

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (nonatomic) double maximumNavigationBarWidth;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (retain, nonatomic) SKUIResourceLoader *resourceLoader;
@property (retain, nonatomic) SKUILayoutCache *textLayoutCache;

- (void).cxx_destruct;

@end
