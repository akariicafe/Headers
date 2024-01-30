@class AMSUIWebErrorPageModel, AMSUIErrorView, AMSUIWebClientContext, NSString, AMSUIWebAppearance;

@interface AMSUIWebErrorViewController : AMSUICommonViewController <AMSUIWebPagePresenter>

@property (retain, nonatomic) AMSUIWebAppearance *appearance;
@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) AMSUIErrorView *errorView;
@property (retain, nonatomic) AMSUIWebErrorPageModel *model;
@property (nonatomic) BOOL showingCancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)_applyAppearance;
- (void)willPresentPageModel:(id)a0 appearance:(id)a1;
- (void)_showCancelButtonIfNeeded;

@end
