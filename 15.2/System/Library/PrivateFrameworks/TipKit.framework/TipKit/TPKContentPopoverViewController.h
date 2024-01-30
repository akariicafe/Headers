@class UIView, UIPopoverPresentationController;

@interface TPKContentPopoverViewController : UIViewController <UIAdaptivePresentationControllerDelegate, UIPopoverPresentationControllerDelegate>

@property (nonatomic, weak) void /* unknown type, empty encoding */ popoverDelegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ sourceViewController;
@property (nonatomic, retain) void /* unknown type, empty encoding */ contentView;
@property (nonatomic, readonly) UIPopoverPresentationController *popoverPresentationController;
@property (nonatomic, readonly) BOOL _canShowWhileLocked;
@property (nonatomic, retain) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sourceRect;
@property (nonatomic) unsigned long long permittedArrowDirections;
@property (nonatomic) void /* unknown type, empty encoding */ preferredPopoverWidth;

- (void)prepareForPopoverPresentation:(id)a0;
- (id)presentationController:(id)a0 viewControllerForAdaptivePresentationStyle:(long long)a1;
- (void)viewDidLoad;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)presentationControllerDidAttemptToDismiss:(id)a0;
- (void)viewDidLayoutSubviews;
- (BOOL)popoverPresentationControllerShouldDismissPopover:(id)a0;
- (void)popoverPresentationController:(id)a0 willRepositionPopoverToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inView:(id *)a2;
- (void)presentationControllerWillDismiss:(id)a0;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithContentController:(id)a0 tipContent:(id)a1 sourceViewController:(id)a2;
- (id)initWithContentController:(id)a0 tipContent:(id)a1 sourceViewController:(id)a2 popoverDelegate:(id)a3;
- (void)passthroughViewsNeedsUpdate;

@end
