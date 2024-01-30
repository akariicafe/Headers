@class SKUILoadingTemplateViewElement, NSString, SKUIActivityIndicatorView, SKUIActivityIndicatorViewElement, SKUILayoutCache, NSObject, SKUIViewElementLayoutContext;
@protocol OS_dispatch_source;

@interface SKUILoadingDocumentViewController : SKUIViewController <SKUIDocumentViewController> {
    SKUIActivityIndicatorViewElement *_activityIndicatorElement;
    SKUIActivityIndicatorView *_activityIndicatorView;
    NSObject<OS_dispatch_source> *_delayTimer;
    SKUILayoutCache *_layoutCache;
    SKUILoadingTemplateViewElement *_templateElement;
    SKUIViewElementLayoutContext *_viewLayoutContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_activityIndicator;
- (void)dealloc;
- (void)_showActivityIndicator;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)documentDidUpdate:(id)a0;
- (id)initWithTemplateElement:(id)a0;
- (id)initWithActivityIndicatorElement:(id)a0;
- (id)_layoutCache;
- (id)_viewLayoutContext;
- (void)_reloadViewStyling;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_computedFrameForActivityIndicatorView;

@end
