@class SKUILayoutCache, SKUIViewElementLayoutContext, NSString, SKUIChartsTemplateViewElement, SKUIResourceLoader, NSMutableArray, SKUIModernChartsView, SKUIActivityIndicatorView;

@interface SKUIModernChartsDocumentViewController : SKUIViewController <SKUIResourceLoaderDelegate, SKUIDocumentViewController, SKUIModalSourceViewProvider> {
    SKUIActivityIndicatorView *_activityIndicatorView;
    SKUIModernChartsView *_chartsView;
    NSMutableArray *_columnViewControllers;
    SKUILayoutCache *_layoutCache;
    SKUIChartsTemplateViewElement *_templateElement;
    SKUIViewElementLayoutContext *_viewLayoutContext;
    SKUIResourceLoader *_resourceLoader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentScrollView;
- (void).cxx_destruct;
- (void)_showActivityIndicator;
- (void)loadView;
- (id)_resourceLoader;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentInset;
- (void)viewWillLayoutSubviews;
- (void)documentDidUpdate:(id)a0;
- (void)documentMediaQueriesDidUpdate:(id)a0;
- (void)resourceLoader:(id)a0 didLoadAllForReason:(long long)a1;
- (void)resourceLoaderDidBeginLoading:(id)a0;
- (void)getModalSourceViewForElementIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithTemplateElement:(id)a0;
- (id)_layoutCache;
- (id)_viewLayoutContext;
- (id)_newColumnViewControllersWithReusableViewControllers:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_computedFrameForActivityIndicatorView;
- (void)_reloadWithTemplateElement:(id)a0;
- (void)_hideActivityIndicator;

@end
