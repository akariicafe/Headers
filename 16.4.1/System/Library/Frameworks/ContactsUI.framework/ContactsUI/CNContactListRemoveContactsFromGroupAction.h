@class CNContactStore, NSArray, CNUIExternalComponentsFactory;

@interface CNContactListRemoveContactsFromGroupAction : CNContactListUndoableAction

@property (readonly, nonatomic) CNUIExternalComponentsFactory *componentsFactory;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (nonatomic) long long originalContactCount;
@property (retain, nonatomic) NSArray *actions;
@property (nonatomic) BOOL confirmAction;

+ (id)descriptorForRequiredKeys;
+ (id)log;
+ (id)actionForContact:(id)a0 configuration:(id)a1;

- (void)performAction;
- (void).cxx_destruct;
- (void)showRemoveFromGroupFailureAlert;
- (BOOL)editRequiresAuthorization;
- (BOOL)editRequiresAuthorizationCheckForActions:(id)a0;
- (id)groupToRemoveFrom;
- (id)initWithContacts:(id)a0 configuration:(id)a1 withConfirmation:(BOOL)a2;
- (void)performAuthorizedRemoveFromGroup:(id)a0;
- (void)performUndoAction;
- (BOOL)shouldReloadListOnCompletion;

@end
