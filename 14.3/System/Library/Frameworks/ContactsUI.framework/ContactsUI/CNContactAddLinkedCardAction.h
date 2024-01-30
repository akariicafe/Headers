@class CNContact, NSArray, NSString, CNContactPickerViewController;

@interface CNContactAddLinkedCardAction : CNContactAction <CNContactPickerDelegate, CNContactContentViewControllerDelegate>

@property (retain, nonatomic) CNContactPickerViewController *contactPicker;
@property (retain, nonatomic) CNContact *selectedContact;
@property (retain, nonatomic) CNContact *chosenContact;
@property (retain, nonatomic) NSArray *editingLinkedContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)contactViewController:(id)a0 shouldPerformDefaultActionForContact:(id)a1 propertyKey:(id)a2 labeledValue:(id)a3;
- (void).cxx_destruct;
- (void)performActionWithSender:(id)a0;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)peoplePickerLinkButtonTapped;

@end
