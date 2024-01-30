@class NSString, UIViewController, CNContact;

@interface CNContactCreateNewContactAction : CNContactAction <CNContactViewControllerDelegate>

@property (retain, nonatomic) CNContact *createdContact;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (void).cxx_destruct;
- (void)performActionWithSender:(id)a0;

@end
