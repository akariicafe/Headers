@class NSString, UIViewController, UIView;
@protocol IAMViewControllerMetricsDelegate;

@interface IAMModalViewController : UIViewController <_UISheetPresentationControllerDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (readonly) BOOL shouldUsePadLayout;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (weak, nonatomic) id<IAMViewControllerMetricsDelegate> metricsDelegate;
@property (copy, nonatomic) id /* block */ viewControllerWillDismissBlock;
@property (nonatomic) BOOL shouldPresentFullscreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredStatusBarStyle;
- (id)_presentationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)shouldAutorotate;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)viewDidLoad;

@end
