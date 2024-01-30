@class NSString, SKUIChartsTemplateViewElement, SKUIChartColumnsView, SKUIResourceLoader, NSMutableArray;

@interface SKUIChartsDocumentViewController : SKUIViewController <SKUIResourceLoaderDelegate, SKUIDocumentViewController> {
    SKUIChartColumnsView *_chartsView;
    NSMutableArray *_columnViewControllers;
    SKUIChartsTemplateViewElement *_templateElement;
    SKUIResourceLoader *_resourceLoader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (id)contentScrollView;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)loadView;
- (id)_resourceLoader;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)documentDidUpdate:(id)a0;
- (void)documentMediaQueriesDidUpdate:(id)a0;
- (void)skui_viewWillAppear:(BOOL)a0;
- (void)resourceLoader:(id)a0 didLoadAllForReason:(long long)a1;
- (void)resourceLoaderDidBeginLoading:(id)a0;
- (id)initWithTemplateElement:(id)a0;
- (id)_newColumnViewControllersWithReusableViewControllers:(id)a0;
- (long long)_visibleColumnCountForWidth:(double)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_chartInsets;
- (id)_columnViewControllers;

@end
