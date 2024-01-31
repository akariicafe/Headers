@class CNContactFormatter, CNContactStore, CNUIExternalComponentsFactory, NSArray, CNUICoreRecentsManager;

@interface CNContactListDeleteContactsAction : CNContactListUndoableAction

@property (readonly, nonatomic) CNUIExternalComponentsFactory *componentsFactory;
@property (readonly, nonatomic) CNUICoreRecentsManager *recentsManager;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (nonatomic) long long originalContactCount;
@property (retain, nonatomic) NSArray *actions;

+ (id)descriptorForRequiredKeys;
+ (id)log;
+ (id)actionForContact:(id)a0 configuration:(id)a1;

- (id)alertTitle;
- (void)performAction;
- (void).cxx_destruct;
- (id)initWithContacts:(id)a0 configuration:(id)a1;
- (BOOL)editRequiresAuthorization;
- (BOOL)editRequiresAuthorizationCheckForActions:(id)a0;
- (void)performUndoAction;
- (BOOL)shouldReloadListOnCompletion;
- (void)showDeleteFailureAlert;

@end
