@class _UITableViewDiffableDataSource, CKScheduledUpdater, NSArray, UILabel, NSString, UIBarButtonItem;

@interface CKBlackholeConversationListCommonViewController : UITableViewController <UITableViewDelegate>

@property (retain, nonatomic) _UITableViewDiffableDataSource *tableViewDataSource;
@property (retain, nonatomic) UIBarButtonItem *clearAllButton;
@property (retain, nonatomic) UILabel *emptyConversationListLabel;
@property (retain, nonatomic) CKScheduledUpdater *updater;
@property (retain, nonatomic) NSArray *visibleConversations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willResignActive;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)didLock;
- (id)init;
- (void)statusBarWillAnimateByHeight:(double)a0;
- (void).cxx_destruct;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)didWake;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (id)_conversations;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_updateConversationList;
- (void)endHoldingConversationListUpdatesForKey:(id)a0;
- (void)_clearAllTapped;
- (void)_deleteConversation:(id)a0;
- (void)_confirmDeleteConversation:(id)a0 view:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)_alertTitleForDelete;
- (id)_conversationList;
- (void)_deleteConversation:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_alertTitleForClearAll;
- (void)popViewControllerIfNecessary;
- (void)_clearAllTappedWithCompletionHandler:(id /* block */)a0;
- (void)_batchDeleteConversationWithCompletionHandler:(id /* block */)a0;
- (void)_updateConversationListEmptyLabel;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateFocusIfNeeded;
- (void)didUnlock;
- (void)willBecomeActive;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)setNeedsFocusUpdate;
- (void)viewSafeAreaInsetsDidChange;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)a0;
- (void)willUnlock;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)suspend;
- (void)viewDidLoad;
- (void)encodeWithCoder:(id)a0;

@end
