@class SKUINavigationDocumentController, NSString, UISplitViewController, SKUISplitViewTemplateElement, UIViewController;

@interface SKUISplitViewDocumentViewController : SKUIViewController <SKUINavigationDocumentDelegate, SKUIDocumentViewController> {
    UIViewController *_delayingPresentationViewController;
    UISplitViewController *_splitViewController;
    SKUISplitViewTemplateElement *_templateElement;
}

@property (retain, nonatomic) SKUINavigationDocumentController *leftNavigationDocumentController;
@property (retain, nonatomic) SKUINavigationDocumentController *rightNavigationDocumentController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (id)_defaultBackgroundColor;
- (BOOL)_isFullyPopulated;
- (void)_reloadSplitViewControllers;
- (void)_skui_endDelayingPresentation;
- (void)delayPresentationIfNeededForParentViewController:(id)a0;
- (void)documentDidUpdate:(id)a0;
- (id)initWithTemplateElement:(id)a0 clientContext:(id)a1;
- (id)leftBarButtonItemsForDocument:(id)a0;
- (void)navigationDocumentStackDidChange:(id)a0;
- (void)skui_viewWillAppear:(BOOL)a0;

@end
