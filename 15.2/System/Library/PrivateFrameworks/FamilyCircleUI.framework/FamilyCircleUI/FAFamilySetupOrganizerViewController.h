@class NSString;
@protocol FAFamilySetupPageDelegate;

@interface FAFamilySetupOrganizerViewController : FAConfirmIdentityViewController <FAFamilySetupPage>

@property (weak, nonatomic) id<FAFamilySetupPageDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)instructions;
- (id)initWithAccount:(id)a0 store:(id)a1;
- (void)_cancelButtonWasTapped:(id)a0;
- (void).cxx_destruct;
- (id)pageTitle;
- (id)_createCancelButton;
- (BOOL)shouldShowInviteeInstructions;
- (id)titleForContinuebutton;
- (void)continueButtonWasTapped:(id)a0;

@end
