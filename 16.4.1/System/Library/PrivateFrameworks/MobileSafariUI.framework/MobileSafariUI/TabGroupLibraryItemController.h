@class WBTab, WBTabGroup;

@interface TabGroupLibraryItemController : LibraryItemController

@property (readonly, nonatomic) WBTabGroup *tabGroup;
@property (readonly, nonatomic) WBTab *tab;
@property (readonly, nonatomic, getter=isTabGroupSynced) BOOL tabGroupSynced;

- (BOOL)isSelected;
- (id)accessibilityIdentifier;
- (id)accessories;
- (BOOL)isSpringLoaded;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)subitems;
- (unsigned long long)hash;
- (BOOL)isExpanded;
- (id)tabGroupProvider;
- (id)dragItems;
- (id)description;
- (void).cxx_destruct;
- (BOOL)allowsMoveOperation;
- (void)updateListContentConfiguration:(id)a0;
- (BOOL)_sessionContainsLocalTabs:(id)a0;
- (BOOL)_sessionContainsTabDocuments:(id)a0;
- (BOOL)_sessionContainsTabGroup:(id)a0;
- (void)didSelectItem;
- (long long)dropIntentForSession:(id)a0;
- (unsigned long long)dropOperationForSession:(id)a0;
- (BOOL)hasSubitems;
- (id)initWithConfiguration:(id)a0 sectionController:(id)a1 tabGroup:(id)a2 tab:(id)a3;
- (void)performDropWithProposal:(id)a0 session:(id)a1;
- (BOOL)shouldPersistSelection;
- (id)swipeActionsConfiguration;
- (void)willToggleExpansionState;

@end
