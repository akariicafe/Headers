@class CNContactStore, CNContact, OBBoldTrayButton, NSLayoutConstraint;

@interface CNMeCardSharingOnboardingViewController : OBTableWelcomeController

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSLayoutConstraint *tableViewHeightConstraint;
@property (retain, nonatomic) OBBoldTrayButton *confirmButton;

+ (id)headerText;

- (void)updateForContentSizeCategoryChange;
- (void)didTapDoneButton:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)handleConfirmButtonTapped;
- (id)confirmButtonTitle;

@end
