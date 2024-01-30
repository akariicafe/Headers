@class UIView, NSString, NSArray, VSCredentialEntryPicker, PSSpecifier, VSCredentialEntryViewModel, UIButton, VSIdentityProviderLogoView;
@protocol VSAuthenticationViewControllerDelegate;

@interface VSCredentialEntryViewController_iOS : ACUIViewController <VSCredentialEntryViewController, VSPSPickerTableViewCellDelegate>

@property (retain, nonatomic) VSIdentityProviderLogoView *logoView;
@property (retain, nonatomic) UIButton *linkButton;
@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) UIView *buttonView;
@property (retain, nonatomic) NSArray *fieldSpecifiers;
@property (nonatomic) double keyboardHeight;
@property (weak, nonatomic) id textFieldTextDidChangeObserver;
@property (weak, nonatomic) id keyboardWillShowObserver;
@property (weak, nonatomic) id keyboardWillHideObserver;
@property (retain, nonatomic) id weakTarget;
@property (retain, nonatomic) PSSpecifier *pickerButtonSpecifier;
@property (retain, nonatomic) PSSpecifier *pickerSpecifier;
@property (retain, nonatomic) VSCredentialEntryPicker *picker;
@property (retain, nonatomic) VSCredentialEntryViewModel *viewModel;
@property (weak, nonatomic) id<VSAuthenticationViewControllerDelegate> delegate;
@property (nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredLogoSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_presentError:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)doneButtonPressed:(id)a0;
- (id)_linkURL;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)cancelButtonTapped:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)pickerTitle;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidLoad;
- (void)_linkButtonTapped:(id)a0;
- (void)_stopObservingViewModel:(id)a0;
- (void)_startObservingViewModel:(id)a0;
- (void)_startValidation;
- (long long)pickerViewCellInitialSelectedRow:(id)a0;
- (id)pickerViewCell:(id)a0 titleForRow:(long long)a1;
- (long long)pickerViewCellNumberOfRows:(id)a0;
- (void)pickerViewCell:(id)a0 didSelectRow:(long long)a1;
- (id)_specifierForTextField:(id)a0;
- (void)_setText:(id)a0 forSpecifier:(id)a1;
- (void)_updateLinkButtonLayout;
- (id)_textFieldForSpecifier:(id)a0;
- (id)_credentialEntryFieldForSpecifier:(id)a0;
- (id)_textForSpecifier:(id)a0;
- (id)_createSpecifierForField:(id)a0;
- (void)pickerButtonSelected;
- (void)_jsButtonTapped:(id)a0;
- (void)buildButtonsIfNeeded;

@end
