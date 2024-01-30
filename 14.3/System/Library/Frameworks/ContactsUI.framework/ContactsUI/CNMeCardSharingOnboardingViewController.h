@class CNContactStore, CNContact, OBBoldTrayButton, NSLayoutConstraint;

@interface CNMeCardSharingOnboardingViewController : OBTableWelcomeController

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSLayoutConstraint *tableViewHeightConstraint;
@property (retain, nonatomic) OBBoldTrayButton *confirmButton;

+ (id)headerText;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)confirmButtonTitle;
- (void)didTapDoneButton:(id)a0;
- (void)updateForContentSizeCategoryChange;
- (void)handleConfirmButtonTapped;
- (void)viewDidLoad;

@end
