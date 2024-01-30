@class NSString, CNQueue, CNContainer, CNGroup, CNContactStore, CNUIEditAuthorizationController, CNUIGroupsAndContainersSaveManager, UIViewController;
@protocol CNVCardImportControllerPresentationDelegate, CNVCardImportControllerDelegate;

@interface CNVCardImportController : NSObject <CNContactViewControllerDelegate, CNMultipleUnknownContactsViewControllerDelegate, CNUIEditAuthorizationControllerDelegate>

@property (weak, nonatomic) id<CNVCardImportControllerPresentationDelegate> presentationDelegate;
@property (retain, nonatomic) CNQueue *receivedContactsQueue;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager;
@property (weak, nonatomic) UIViewController *presentedViewController;
@property (retain, nonatomic) CNUIEditAuthorizationController *editAuthorizationController;
@property (weak, nonatomic) id<CNVCardImportControllerDelegate> delegate;
@property (retain, nonatomic) CNGroup *targetGroup;
@property (retain, nonatomic) CNContainer *targetContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (void)editAuthorizationController:(id)a0 authorizationDidFinishWithResult:(long long)a1;
- (void).cxx_destruct;
- (id)dequeueContacts;
- (id)authorizationCheckForSavingReceivedContacts;
- (void)authorizeAndSaveUnknownPersons;
- (void)cancelModalUnknownPersons:(id)a0;
- (id)contactsFromURL:(id)a0;
- (void)dismissContactsAndPresentNext;
- (void)enqueueContacts:(id)a0;
- (BOOL)enqueueContactsAtURL:(id)a0;
- (id)initWithContactStore:(id)a0 presentationDelegate:(id)a1;
- (id)initWithContactStore:(id)a0 presentationDelegate:(id)a1 targetGroup:(id)a2 targetContainer:(id)a3;
- (void)multipleUnknownContactsViewControllerDidComplete:(id)a0;
- (void)presentEnqueueResultsUIForResultContacts:(id)a0;
- (void)presentImportUIForContacts:(id)a0;
- (void)processNextContacts;
- (void)saveUnknownPersons:(id)a0;
- (void)saveUnknownPersonsAndMarkSaveWithAuthorizationResult:(long long)a0;
- (void)showEditAuthorizationPane:(id)a0 animated:(BOOL)a1;

@end
