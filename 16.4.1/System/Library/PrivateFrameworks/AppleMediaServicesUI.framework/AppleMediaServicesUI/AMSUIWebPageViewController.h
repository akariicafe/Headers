@class AMSUIWebView, NSString, AMSUIWebClientContext, NSURL, AMSUIWebAppearance, AMSUIWebPageModel;
@protocol AMSUIWebPageViewControllerDelegate;

@interface AMSUIWebPageViewController : AMSUICommonViewController <AMSUIWebPagePresenter>

@property (readonly, nonatomic) AMSUIWebAppearance *appearance;
@property (readonly, weak, nonatomic) AMSUIWebClientContext *context;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) AMSUIWebPageModel *model;
@property (retain, nonatomic) NSURL *URL;
@property (weak, nonatomic) id<AMSUIWebPageViewControllerDelegate> delegate;
@property (readonly, nonatomic) AMSUIWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateLayout;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)contentScrollViewForEdge:(unsigned long long)a0;
- (id)loadRequest:(id)a0;
- (void)_applyAppearance;
- (void)_didEncodeRequest:(id)a0;
- (void)_downloadHTMLForRequest:(id)a0 completion:(id /* block */)a1;
- (void)_updateToolbarButtonItems;
- (void)_willEncodeRequest:(id)a0;
- (id)initWithContext:(id)a0 dataProvider:(id)a1;
- (void)willPresentPageModel:(id)a0 appearance:(id)a1;

@end
