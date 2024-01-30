@protocol VTUISiriDataSharingOptInViewControllerDelegate;

@interface VTUISiriDataSharingOptInViewController : OBWelcomeController

@property (weak, nonatomic) id<VTUISiriDataSharingOptInViewControllerDelegate> delegate;

- (BOOL)_canShowWhileLocked;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithViewStyle:(long long)a0;

@end
