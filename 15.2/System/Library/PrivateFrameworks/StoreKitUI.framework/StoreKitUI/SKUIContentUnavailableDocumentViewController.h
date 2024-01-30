@class SKUIContentUnavailableView, NSString, SKUIViewElementLayoutContext, SKUILayoutCache, SKUIContentUnavailableTemplateElement;

@interface SKUIContentUnavailableDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUIDocumentViewController> {
    SKUIContentUnavailableView *_contentUnavailableView;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIContentUnavailableTemplateElement *_templateElement;
    SKUILayoutCache *_textLayoutCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsets;
- (id)_layoutContext;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)documentDidUpdate:(id)a0;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (void)layoutCacheDidFinishBatch:(id)a0;
- (id)initWithTemplateElement:(id)a0;
- (void)_reloadContentUnavailableView:(id)a0 width:(double)a1;

@end
