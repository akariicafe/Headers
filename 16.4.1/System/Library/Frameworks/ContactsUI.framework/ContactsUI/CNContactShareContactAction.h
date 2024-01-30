@class UIActivityViewController, CNContact, NSString, CNContactCardFieldPicker, UIView;

@interface CNContactShareContactAction : CNContactAction <UIActivityViewControllerObjectManipulationDelegate, CNContactCardFieldPickerDelegate>

@property (retain, nonatomic) UIActivityViewController *activityViewController;
@property (retain, nonatomic) CNContact *filteredContact;
@property (retain, nonatomic) CNContactCardFieldPicker *fieldPicker;
@property (retain, nonatomic) UIView *sourceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_customizationAvailableForActivityViewController:(id)a0;
- (id)_customizationGroupsForActivityViewController:(id)a0;
- (id)activityItemForContact:(id)a0;
- (BOOL)canPerformAction;
- (void)contactCardFieldPicker:(id)a0 didFinishWithContacts:(id)a1;
- (id)customActionViewControllerForActivityViewController:(id)a0;
- (id)customLocalizedActionTitleForActivityViewController:(id)a0;
- (void)performActionWithSender:(id)a0;
- (void)presentFilterFieldPicker;
- (void)presentShareSheet;
- (void)setupForContactFieldPicker;

@end
