@class CNAccountsAndGroupsDataSource, CNUIGroupsAndContainersSaveManager, NSMutableArray;
@protocol CNAccountsAndGroupsActionsProviderDelegate;

@interface CNAccountsAndGroupsActionsProvider : NSObject

@property (retain, nonatomic) CNAccountsAndGroupsDataSource *dataSource;
@property (retain, nonatomic) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager;
@property (retain, nonatomic) NSMutableArray *issuedSaveRequestIdentifiers;
@property (weak, nonatomic) id<CNAccountsAndGroupsActionsProviderDelegate> delegate;

- (BOOL)isAuthorizedToEditItem:(id)a0;
- (BOOL)addGroupToStoreForGroupItem:(id)a0 withName:(id)a1;
- (id)initWithDataSource:(id)a0 saveManager:(id)a1;
- (void)deleteGroupForItem:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)authorizedEditGroupNameForCell:(id)a0;
- (BOOL)editGroupNameActionForItem:(id)a0 cell:(id)a1;
- (BOOL)authorizedDeleteGroupForItem:(id)a0 completionHandler:(id /* block */)a1;
- (id)leadingActionsForItem:(id)a0 cell:(id)a1;
- (void).cxx_destruct;
- (BOOL)deleteGroupActionForItem:(id)a0 sourceView:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateItem:(id)a0 withNewName:(id)a1;
- (void)authorizedCreateGroupActionForContainerItem:(id)a0;
- (BOOL)emailGroupForItem:(id)a0;
- (void)createGroupActionForContainerItem:(id)a0 isCollectionViewEditing:(BOOL)a1;
- (BOOL)exportGroupForItem:(id)a0 sourceView:(id)a1;
- (BOOL)messageGroupForItem:(id)a0;
- (id)actionsForItem:(id)a0 cell:(id)a1;
- (id)contextMenuConfigurationForItem:(id)a0 cell:(id)a1 atIndexPath:(id)a2;
- (id)trailingActionsForItem:(id)a0 cell:(id)a1 isCollectionViewEditing:(BOOL)a2;

@end
