@class VideosExtrasMainTemplateViewController, NSString, VideosExtrasContext, VideosExtrasLoadingView, UIViewController;

@interface VideosExtrasNavigationController : UINavigationController <VideosExtrasLoadingViewDelegate, IKAppNavigationController> {
    VideosExtrasLoadingView *_loadingView;
    UIViewController *_emptyViewController;
    BOOL _clearStackOnPush;
}

@property (readonly, weak, nonatomic) VideosExtrasContext *context;
@property (readonly) VideosExtrasMainTemplateViewController *mainTemplateViewController;
@property (nonatomic) BOOL showsBuiltInNavControls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)removeDocument:(id)a0;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)viewDidLoad;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)initWithContext:(id)a0;
- (id)documents;
- (void).cxx_destruct;
- (void)willShowViewController:(id)a0 animated:(BOOL)a1;
- (void)_dismissViewController:(id)a0;
- (void)insertDocument:(id)a0 beforeDocument:(id)a1 options:(id)a2;
- (void)popDocument;
- (void)popToDocument:(id)a0;
- (void)popToRootDocument;
- (void)pushDocument:(id)a0 options:(id)a1;
- (void)replaceDocument:(id)a0 withDocument:(id)a1 options:(id)a2;
- (void)_installBackButtonOnNavigationItem:(id)a0 withTitle:(id)a1;
- (void)_installDoneButtonOnNavigationItem:(id)a0;
- (void)_popViewControllerFromBackButton;
- (void)_presentDialogTemplate:(id)a0;
- (id)_viewControllerForDocument:(id)a0 index:(long long *)a1;
- (void)applyMainTemplateOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)finalizeMainTemplateOffset:(BOOL)a0;
- (void)loadingView:(id)a0 documentDidUpdate:(id)a1 options:(id)a2;
- (void)setClearsStackOnNextPush;

@end
