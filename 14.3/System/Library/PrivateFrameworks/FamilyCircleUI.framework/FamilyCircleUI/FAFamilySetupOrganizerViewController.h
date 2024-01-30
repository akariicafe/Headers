@class NSString;
@protocol FAFamilySetupPageDelegate;

@interface FAFamilySetupOrganizerViewController : FAConfirmIdentityViewController <FAFamilySetupPage>

@property (weak, nonatomic) id<FAFamilySetupPageDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_cancelButtonWasTapped:(id)a0;
- (id)instructions;
- (id)pageTitle;
- (void)viewDidLoad;
- (id)initWithAccount:(id)a0 store:(id)a1;
- (BOOL)shouldShowInviteeInstructions;
- (id)titleForContinuebutton;
- (void)continueButtonWasTapped:(id)a0;
- (id)_createCancelButton;

@end
