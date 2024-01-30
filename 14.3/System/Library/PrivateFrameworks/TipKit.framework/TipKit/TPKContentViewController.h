@class UIViewController, UIBarItem, NSString, UIView, TPKContentController;

@interface TPKContentViewController : UIViewController <UIPopoverPresentationControllerDelegate>

@property (nonatomic) struct CGSize { double width; double height; } _clientProvidedPreferredContentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _clientProvidedSourceRect;
@property (weak, nonatomic) TPKContentController *_contentController;
@property (weak, nonatomic) UIViewController *sourceViewController;
@property (retain, nonatomic) UIBarItem *barItem;
@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sourceRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)_contentSizeCategoryDidChange;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)dismissPopoverAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)prepareForPopoverPresentation:(id)a0;
- (id)popoverPresentationController;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)isModalInPresentation;
- (BOOL)presentationControllerShouldDismiss:(id)a0;
- (id)_passthroughViewsForViewController:(id)a0;
- (void)_updatePopoverSize;
- (void)_tpkSetPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)_passthroughViewsForView:(id)a0;
- (id)initPopoverWithContentView:(id)a0 sourceViewController:(id)a1;

@end
