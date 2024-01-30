@class SKUIResourceLoader;

@interface SKUIURLActivityItemProvider : SKUIDeferredActivityItemProvider {
    SKUIResourceLoader *_resourceLoader;
}

+ (id)placeholderItem;

- (id)item;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewController:(id)a0 thumbnailImageForActivityType:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;
- (id)activityViewControllerLinkMetadata:(id)a0;
- (id)initWithProductPageItem:(id)a0 clientContext:(id)a1;
- (id)initWithProductPageItemProvider:(id /* block */)a0 clientContext:(id)a1;
- (id)linkPresentationImageFor:(id)a0;

@end
