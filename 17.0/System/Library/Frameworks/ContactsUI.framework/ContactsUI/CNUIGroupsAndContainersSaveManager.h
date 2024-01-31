@class CNContactStore, NSString, CNUIEditAuthorizationController, CNContactViewCache;

@interface CNUIGroupsAndContainersSaveManager : NSObject <CNUIContactSaveDelegate, CNUIEditAuthorizationControllerDelegate>

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNContactViewCache *contactViewCache;
@property (retain, nonatomic) CNUIEditAuthorizationController *authorizationController;
@property (copy, nonatomic) id /* block */ authorizationResultBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (id)accountForContainerIdentifier:(id)a0;
- (id)parentGroupsForContact:(id)a0;
- (id)groupsByContainerDictForContainers:(id)a0 groups:(id)a1;
- (BOOL)isAuthorizedToEditContact:(id)a0 withTargetContainer:(id)a1 ignoresParentalRestrictions:(BOOL)a2;
- (BOOL)updateGroupWithIdentifier:(id)a0 inStore:(id)a1 withNewName:(id)a2 ignoresGuardianRestrictions:(BOOL)a3 issuedRequestIdentifiers:(id)a4;
- (id)addContact:(id)a0 toGroup:(id)a1 moveWasAuthorized:(BOOL)a2;
- (id)mdmUnauthorizedContactIdentifiersForTargetGroup:(id)a0 withManagedConfiguration:(id)a1;
- (id)addContact:(id)a0 toGroupIdentifier:(id)a1 inContainerIdentifier:(id)a2 moveWasAuthorized:(BOOL)a3;
- (id)containerForContainerIdentifier:(id)a0;
- (BOOL)updateContainerWithIdentifier:(id)a0 inStore:(id)a1 withNewName:(id)a2 ignoresGuardianRestrictions:(BOOL)a3 issuedRequestIdentifiers:(id)a4;
- (id)addContact:(id)a0 toGroupWithIdentifier:(id)a1 moveWasAuthorized:(BOOL)a2;
- (id)initWithContactStore:(id)a0;
- (id)exchangeContactsToDeleteInAccountIdentifier:(id)a0 originalContact:(id)a1;
- (id)containerForGroupIdentifier:(id)a0;
- (void)_updateSaveRequest:(id)a0 removeContact:(id)a1 fromGroups:(id)a2;
- (id)linkedContactForContact:(id)a0 inContainer:(id)a1 inContactStore:(id)a2;
- (id)groupForGroupIdentifier:(id)a0;
- (id)_updateSaveRequest:(id)a0 addContact:(id)a1 toGroupContext:(id)a2 contactsToLink:(id)a3;
- (id)_updateSaveRequest:(id)a0 addContact:(id)a1 toGroups:(id)a2 inContainer:(id)a3 contactParentContainer:(id)a4 contactsToLink:(id)a5;
- (void)authorizeForViewController:(id)a0 sender:(id)a1 animated:(BOOL)a2 completionBlock:(id /* block */)a3;
- (BOOL)removeContact:(id)a0 fromGroups:(id)a1 ignoresGuardianRestrictions:(BOOL)a2;
- (BOOL)deleteContainerWithIdentifier:(id)a0 inStore:(id)a1 ignoresGuardianRestrictions:(BOOL)a2 issuedRequestIdentifiers:(id)a3;
- (BOOL)addLinkedContacts:(id)a0 toOriginalContact:(id)a1 ignoresGuardianRestrictions:(BOOL)a2 issuedRequestIdentifiers:(id)a3;
- (void).cxx_destruct;
- (id)addContacts:(id)a0 toGroup:(id)a1 inContainer:(id)a2 moveWasAuthorized:(BOOL)a3;
- (void)editAuthorizationController:(id)a0 authorizationDidFinishWithResult:(long long)a1;
- (id)acAccountForGroupIdentifier:(id)a0;
- (BOOL)removeContact:(id)a0 fromGroup:(id)a1 ignoresGuardianRestrictions:(BOOL)a2;
- (BOOL)isAuthorizedToEditContainerWithIdentifier:(id)a0;
- (id)addContact:(id)a0 toGroup:(id)a1 inContainer:(id)a2 moveWasAuthorized:(BOOL)a3;
- (id)addContacts:(id)a0 toGroupWithIdentifier:(id)a1 inContainerWithIdentifier:(id)a2 moveWasAuthorized:(BOOL)a3;
- (BOOL)isMDMAuthorizedToAddContact:(id)a0 toAccount:(id)a1 withManagedConfiguration:(id)a2;
- (id)parentAccountExternalIdentifiersForContact:(id)a0;
- (id)updateContacts:(id)a0 forGroupContext:(id)a1 ignoresGuardianRestrictions:(BOOL)a2 issuedRequestIdentifiers:(id)a3;
- (BOOL)container:(id)a0 containsNonUnifiedContact:(id)a1 inContactStore:(id)a2;
- (BOOL)isAuthorizedToEditContact:(id)a0 withTargetGroupWithIdentifier:(id)a1 ignoresParentalRestrictions:(BOOL)a2;
- (id)allMDMUnauthorizedAccountsForTargetGroup:(id)a0 withManagedConfiguration:(id)a1;
- (BOOL)isAuthorizedToEditContainer:(id)a0;
- (BOOL)deleteGroupWithIdentifier:(id)a0 inStore:(id)a1 ignoresGuardianRestrictions:(BOOL)a2 issuedRequestIdentifiers:(id)a3;
- (BOOL)editRequiresAuthorizationForContact:(id)a0 parentContainer:(id)a1 ignoresParentalRestrictions:(BOOL)a2;
- (BOOL)isAuthorizedToAddContact:(id)a0 toContainer:(id)a1 ignoresParentalRestrictions:(BOOL)a2;
- (id)initWithContactStore:(id)a0 contactViewCache:(id)a1;
- (id)acAccountForContainer:(id)a0;

@end
