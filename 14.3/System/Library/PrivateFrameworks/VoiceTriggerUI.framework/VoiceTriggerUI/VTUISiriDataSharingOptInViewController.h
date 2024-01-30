@protocol VTUISiriDataSharingOptInViewControllerDelegate;

@interface VTUISiriDataSharingOptInViewController : OBTextWelcomeController

@property (weak, nonatomic) id<VTUISiriDataSharingOptInViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (id)initWithViewStyle:(long long)a0;

@end
