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

- (id)_defaultBackgroundColor;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)documentDidUpdate:(id)a0;
- (id)leftBarButtonItemsForDocument:(id)a0;
- (void)delayPresentationIfNeededForParentViewController:(id)a0;
- (void)skui_viewWillAppear:(BOOL)a0;
- (id)initWithTemplateElement:(id)a0 clientContext:(id)a1;
- (void)_reloadSplitViewControllers;
- (BOOL)_isFullyPopulated;
- (void)_skui_endDelayingPresentation;
- (void)navigationDocumentStackDidChange:(id)a0;

@end
