@class SUICVoiceSelectionViewModel, NSString, UITableViewDiffableDataSource, UITableView;
@protocol SUICVoiceSelectionViewModelProviding, SUICVoiceSelectionEventHandling;

@interface VTUIVoiceSelectionOptionsView : UIView <UICollectionViewDelegate, UITableViewDelegate, UITableViewDelegatePrivate, SUICVoiceSelectionDisplaying> {
    UITableView *_voicesTableView;
    SUICVoiceSelectionViewModel *_viewModel;
    UITableViewDiffableDataSource *_tableViewDataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SUICVoiceSelectionViewModelProviding> voiceSelectionViewModelProvider;
@property (weak, nonatomic) id<SUICVoiceSelectionEventHandling> voiceSelectionEventHandler;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (void)setSemanticContentAttribute:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (void)voiceSelectionViewModelDidChange;
- (struct CGSize { double x0; double x1; })_cellSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_createAndApplySnapshotForViewModel:(id)a0;
- (id)_diffableTableDataSource;
- (void)_setupVoicesTableView;
- (id)_tableCellForVoiceViewModel:(id)a0 indexPath:(id)a1;

@end
