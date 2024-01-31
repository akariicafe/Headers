@class CNContactStore, CNContact, OBBoldTrayButton, NSLayoutConstraint;

@interface CNMeCardSharingOnboardingViewController : OBTableWelcomeController

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSLayoutConstraint *tableViewHeightConstraint;
@property (retain, nonatomic) OBBoldTrayButton *confirmButton;

+ (id)headerText;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)confirmButtonTitle;
- (void)didTapDoneButton:(id)a0;
- (void)handleConfirmButtonTapped;
- (void)updateForContentSizeCategoryChange;

@end
