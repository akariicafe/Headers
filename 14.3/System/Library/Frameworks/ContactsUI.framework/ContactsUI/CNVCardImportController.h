@class CNContactStore, NSString, CNQueue, CNUIEditAuthorizationController, UIViewController;
@protocol CNVCardImportControllerPresentationDelegate, CNVCardImportControllerDelegate;

@interface CNVCardImportController : NSObject <CNContactViewControllerDelegate, CNMultipleUnknownContactsViewControllerDelegate, CNUIEditAuthorizationControllerDelegate>

@property (weak, nonatomic) id<CNVCardImportControllerPresentationDelegate> presentationDelegate;
@property (retain, nonatomic) CNQueue *receivedContactsQueue;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (weak, nonatomic) UIViewController *presentedViewController;
@property (retain, nonatomic) CNUIEditAuthorizationController *editAuthorizationController;
@property (weak, nonatomic) id<CNVCardImportControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)editAuthorizationController:(id)a0 authorizationDidFinishWithResult:(long long)a1;
- (void)showEditAuthorizationPane:(id)a0 animated:(BOOL)a1;
- (id)dequeueContacts;
- (void)presentEnqueueResultsUIForResultContacts:(id)a0;
- (void)multipleUnknownContactsViewControllerDidComplete:(id)a0;
- (id)contactsFromURL:(id)a0;
- (void)enqueueContacts:(id)a0;
- (id)initWithContactStore:(id)a0 presentationDelegate:(id)a1;
- (BOOL)enqueueContactsAtURL:(id)a0;
- (void)processNextContacts;
- (void)presentImportUIForContacts:(id)a0;
- (void)dismissContactsAndPresentNext;
- (void)saveUnknownPersons:(id)a0;
- (void)authorizeAndSaveUnknownPersons;
- (id)authorizationCheckForSavingReceivedContacts;
- (void)saveUnknownPersonsAndMarkSaveWithAuthorizationResult:(long long)a0;
- (void)cancelModalUnknownPersons:(id)a0;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;

@end
