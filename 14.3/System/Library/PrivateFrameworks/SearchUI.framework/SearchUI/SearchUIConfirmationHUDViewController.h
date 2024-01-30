@class NSString, SearchUIConfirmationHUDView;

@interface SearchUIConfirmationHUDViewController : UIViewController <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) SearchUIConfirmationHUDView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)view;
- (long long)preferredUserInterfaceStyle;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)setTitle:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (BOOL)_canShowWhileLocked;

@end
