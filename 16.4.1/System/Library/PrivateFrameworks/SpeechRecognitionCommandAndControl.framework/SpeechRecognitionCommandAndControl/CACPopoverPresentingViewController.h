@class NSString, UIViewController;
@protocol UIPopoverPresentationControllerDelegate;

@interface CACPopoverPresentingViewController : UIViewController <UIPopoverPresentationControllerDelegate>

@property (weak, nonatomic) id<UIPopoverPresentationControllerDelegate> popoverPresentationDelegate;
@property (retain, nonatomic) UIViewController *viewControllerInPopover;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } portraitUpSourceRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_canShowWhileLocked;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;

@end
