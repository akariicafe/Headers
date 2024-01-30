@class OBBoldTrayButton, CNMutableContact, UITextField, CNSharingProfileAudienceDataSource, NSLayoutConstraint, NSString;
@protocol CNSharingProfileOnboardingAudienceControllerDelegate;

@interface CNSharingProfileOnboardingAudienceViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, CNSharingProfileOnboardingAudienceController>

@property (retain, nonatomic) NSLayoutConstraint *tableViewHeightConstraint;
@property (retain, nonatomic) OBBoldTrayButton *confirmButton;
@property (retain, nonatomic) UITextField *givenNameField;
@property (retain, nonatomic) UITextField *familyNameField;
@property (retain, nonatomic) id traitCollectionChangeToken;
@property (retain, nonatomic) CNMutableContact *contact;
@property (retain, nonatomic) CNSharingProfileAudienceDataSource *sharingAudienceDataSource;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) long long nameOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNSharingProfileOnboardingAudienceControllerDelegate> delegate;

+ (id)descriptorForRequiredKeys;
+ (id)headerText;

- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)textFieldDidEndEditing:(id)a0;
- (void)contentSizeCategoryDidChange:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)updateConfirmButtonEnabledState;
- (id)cellForNameInTableView:(id)a0;
- (id)confirmButtonTitle;
- (void)familyNameDidChange:(id)a0;
- (void)givenNameDidChange:(id)a0;
- (void)handleConfirmButtonTapped:(id)a0;
- (id)initWithContact:(id)a0 selectedSharingAudience:(unsigned long long)a1;

@end
