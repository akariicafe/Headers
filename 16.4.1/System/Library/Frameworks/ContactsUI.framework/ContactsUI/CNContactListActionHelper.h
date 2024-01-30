@class NSArray, NSString, CNContactListActionExecutor, CNContactListActionConfiguration, CNContactOrbActionsController;
@protocol CNContactListActionHelperDelegate;

@interface CNContactListActionHelper : NSObject <CNContactListActionDelegate, CNContactOrbActionsControllerDelegate>

@property (retain, nonatomic) CNContactListActionConfiguration *actionConfiguration;
@property (retain, nonatomic) CNContactListActionExecutor *actionExecutor;
@property (retain, nonatomic) CNContactOrbActionsController *contactActionsController;
@property (weak, nonatomic) id<CNContactListActionHelperDelegate> delegate;
@property (nonatomic) BOOL includesContactOrbActions;
@property (nonatomic) BOOL includesEditingActions;
@property (retain, nonatomic) NSArray *contacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeysForMultiSelectAction:(BOOL)a0;

- (id)presentingViewControllerForActions;
- (void)action:(id)a0 presentViewController:(id)a1;
- (void)actionDidFinish:(id)a0;
- (void)contactOrbActionsController:(id)a0 didUpdateWithMenu:(id)a1;
- (id)presentingViewControllerForActionsController:(id)a0;
- (void)copyContacts:(id)a0;
- (void).cxx_destruct;
- (void)deleteContacts:(id)a0;
- (id)actionsForContacts:(id)a0 dataSourceFilter:(id)a1 sourceView:(id)a2;
- (BOOL)canRemoveFromGroup;
- (BOOL)canShowContactActionsForContacts:(id)a0;
- (BOOL)canShowMergeActionForContacts:(id)a0;
- (BOOL)canShowSetAsMyCardActionForContacts:(id)a0;
- (id)contactActionsMenuForContact:(id)a0;
- (id)contactActionsMenuFromItems:(id)a0;
- (void)deleteContacts:(id)a0 dataSourceFilter:(id)a1;
- (id)initWithContactStore:(id)a0 environment:(id)a1 contactFormatter:(id)a2 undoManager:(id)a3;
- (void)mergeContacts:(id)a0;
- (void)removeContactsFromGroup:(id)a0 withConfirmation:(BOOL)a1;
- (id)searchActionsForContacts:(id)a0;
- (void)shareContacts:(id)a0 sourceView:(id)a1;
- (id)trailingSwipeActionsForContact:(id)a0 dataSourceFilter:(id)a1;
- (void)updateMeContact:(id)a0;

@end
