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

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)textFieldDidChange:(id)a0;
- (void)_next:(id)a0;
- (void)_updateCurrentlyVisibleSections;
- (BOOL)_canMoveToNextStep;
- (id)_rowDescriptorForCredentialDescriptor:(id)a0;
- (void)_updateCanTransitionToNextStepState;
- (void)_updateCurrentlyVisibleSectionsNeedsReloadData:(BOOL)a0;
- (void)_updateTextFieldConstraints;
- (id)defaultRightBarButtonItem;
- (id)initWithCredentialDescriptors:(id)a0;
- (void)setupTableViewSections;

@end
