@class KCSharingGroup;
@protocol _ASAccountSharingGroupOnBoardingViewControllerDelegate;

@interface _ASAccountSharingGroupOnBoardingViewController : OBWelcomeController

@property (readonly, nonatomic) KCSharingGroup *group;
@property (readonly, nonatomic) unsigned long long contentType;
@property (weak, nonatomic) id<_ASAccountSharingGroupOnBoardingViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_cancelButtonSelected;
- (void)_continueButtonSelected;
- (id)initWithContentType:(unsigned long long)a0 group:(id)a1;
- (void)_addButtons;
- (void)_configureCancelButton;
- (void)_configureNotNowButton;
- (void)_notNowButtonSelected;

@end
