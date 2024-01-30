@class NSString, SearchUIConfirmationHUDView;

@interface SearchUIConfirmationHUDViewController : UIViewController <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) SearchUIConfirmationHUDView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (BOOL)_canShowWhileLocked;
- (id)view;
- (long long)preferredUserInterfaceStyle;
- (id)init;
- (void)setTitle:(id)a0;
- (void)viewDidAppear:(BOOL)a0;

@end
