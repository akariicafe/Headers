@class NSString, NSArray, UITextField, UISwitch, FPUIAuthenticationSectionDescriptor, NSLayoutConstraint;

@interface FPUIAuthenticationCredentialsViewController : FPUIAuthenticationTableViewController <UITextFieldDelegate> {
    NSArray *_credentialDescriptors;
    long long _selectedCredentialRow;
    FPUIAuthenticationSectionDescriptor *_credentialsInputSection;
    FPUIAuthenticationSectionDescriptor *_rememberPasswordSection;
    UITextField *_nameInputTextField;
    UITextField *_passwordInputTextField;
    UISwitch *_rememberPasswordSwitch;
    NSLayoutConstraint *_textFieldLeadingAnchorConstraint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)_next:(id)a0;
- (void)textFieldDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)_canMoveToNextStep;
- (id)defaultRightBarButtonItem;
- (void)setupTableViewSections;
- (void)_updateCurrentlyVisibleSections;
- (id)_rowDescriptorForCredentialDescriptor:(id)a0;
- (void)_updateTextFieldConstraints;
- (void)_updateCanTransitionToNextStepState;
- (void)_updateCurrentlyVisibleSectionsNeedsReloadData:(BOOL)a0;
- (id)initWithCredentialDescriptors:(id)a0;

@end
