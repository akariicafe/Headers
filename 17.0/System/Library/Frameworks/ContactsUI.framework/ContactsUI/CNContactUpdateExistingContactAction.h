@class NSString, CNContact;

@interface CNContactUpdateExistingContactAction : CNContactAction <CNContactViewControllerDelegate>

@property (retain, nonatomic) CNContact *existingContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (void)performActionWithSender:(id)a0;

@end
