@class CNContact, NSString, CNContactPickerViewController;

@interface CNContactAddToExistingContactAction : CNContactAction <CNContactPickerDelegate, CNContactViewControllerDelegate>

@property (retain, nonatomic) CNContactPickerViewController *contactPicker;
@property (retain, nonatomic) CNContact *chosenContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)performActionWithSender:(id)a0;

@end
