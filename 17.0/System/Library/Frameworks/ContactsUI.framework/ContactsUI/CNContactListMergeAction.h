@class _TtC10ContactsUI33ContactListMergeUnifyActionHelper, CNUIGroupsAndContainersSaveManager;

@interface CNContactListMergeAction : CNContactListUndoableAction

@property (retain, nonatomic) _TtC10ContactsUI33ContactListMergeUnifyActionHelper *mergeUnifyActionHelper;
@property (retain, nonatomic) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager;

+ (id)descriptorForRequiredKeys;
+ (id)log;

- (void)performAction;
- (void).cxx_destruct;
- (BOOL)executeAction;
- (BOOL)mergeWillRequireLinkingForContacts:(id)a0;
- (void)performUndoAction;
- (BOOL)shouldReloadListOnCompletion;
- (void)showMergeFailureAlert;

@end
