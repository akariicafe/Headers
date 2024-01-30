@class NSString;
@protocol FAFamilySetupPageDelegate;

@interface FAFamilySetupOrganizerViewController : FAConfirmIdentityViewController <FAFamilySetupPage>

@property (weak, nonatomic) id<FAFamilySetupPageDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccount:(id)a0 store:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_createCancelButton;
- (id)instructions;
- (void)_cancelButtonWasTapped:(id)a0;
- (id)pageTitle;
- (void)continueButtonWasTapped:(id)a0;
- (BOOL)shouldShowInviteeInstructions;
- (id)titleForContinuebutton;

@end
