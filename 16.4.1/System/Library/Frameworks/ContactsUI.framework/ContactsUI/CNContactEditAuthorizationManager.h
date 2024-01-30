@class CNContactStore, CNContact, NSString, CNUIEditAuthorizationController, CNContainer, CNContactViewCache;

@interface CNContactEditAuthorizationManager : NSObject <CNUIEditAuthorizationControllerDelegate>

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNContainer *parentContainer;
@property (retain, nonatomic) CNUIEditAuthorizationController *authorizationController;
@property (nonatomic) long long authorizationResult;
@property (copy, nonatomic) id /* block */ authorizationResultBlock;
@property (nonatomic) BOOL ignoresParentalRestrictions;
@property (retain, nonatomic) CNContactViewCache *contactViewCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)authorizeForViewController:(id)a0 sender:(id)a1 animated:(BOOL)a2 completionBlock:(id /* block */)a3;
- (void)editAuthorizationController:(id)a0 authorizationDidFinishWithResult:(long long)a1;
- (void).cxx_destruct;
- (id)authorizationCheck;
- (id)initWithContact:(id)a0 contactStore:(id)a1;
- (void)resetAuthorization;
- (BOOL)saveWasAuthorized;
- (BOOL)shouldPromptForPasscodeAuthorization;
- (void)updateWithContact:(id)a0;

@end
