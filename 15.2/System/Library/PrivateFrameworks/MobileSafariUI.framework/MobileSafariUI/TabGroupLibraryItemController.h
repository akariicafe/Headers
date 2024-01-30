@class WBTabGroup;

@interface TabGroupLibraryItemController : LibraryItemController

@property (readonly, nonatomic) WBTabGroup *tabGroup;
@property (readonly, nonatomic, getter=isTabGroupSynced) BOOL tabGroupSynced;

- (id)tabGroupProvider;
- (id)dragItems;
- (BOOL)isSpringLoaded;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isSelected;
- (unsigned long long)hash;
- (BOOL)allowsMoveOperation;
- (id)secondaryAction;
- (void)updateListContentConfiguration:(id)a0;
- (id)initWithConfiguration:(id)a0 sectionController:(id)a1 tabGroup:(id)a2;
- (unsigned long long)dropOperationForSession:(id)a0;
- (long long)dropIntentForSession:(id)a0;
- (void)performDropWithProposal:(id)a0 session:(id)a1;
- (void)didSelectItem;
- (BOOL)shouldPersistSelection;
- (BOOL)_sessionContainsTabDocuments:(id)a0;
- (BOOL)_sessionContainsTabGroup:(id)a0;

@end
