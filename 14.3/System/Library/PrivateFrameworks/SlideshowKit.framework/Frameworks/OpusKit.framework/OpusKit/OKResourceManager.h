@class OKPresentationViewControllerProxy, NSArray, OFLRUCache;

@interface OKResourceManager : NSObject {
    OFLRUCache *_resources;
    OKPresentationViewControllerProxy *_presentationViewController;
    NSArray *_resourceLoaders;
}

- (void)dealloc;
- (id)initWithPresentationViewController:(id)a0;
- (id)resourceLoaderForURL:(id)a0;
- (id)resourceWithURL:(id)a0 copy:(BOOL)a1;

@end
