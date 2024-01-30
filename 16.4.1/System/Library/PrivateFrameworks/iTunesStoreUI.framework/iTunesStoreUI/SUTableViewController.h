@class NSString, SUTableView, NSIndexPath, SUTableDataSource;

@interface SUTableViewController : SUViewController <UITableViewDataSource, UITableViewDelegate> {
    long long _disappearOrientation;
    NSIndexPath *_firstTapIndexPath;
    long long _placeholderRowCount;
    BOOL _preferUserInteractionWhileScrolling;
}

@property (readonly, nonatomic) unsigned long long numberOfRows;
@property (retain, nonatomic) SUTableDataSource *dataSource;
@property (readonly, nonatomic) SUTableView *tableView;
@property (nonatomic) long long tableViewStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)didReceiveMemoryWarning;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)reloadData;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)deleteRowAtIndexPath:(id)a0;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollToRowAtIndexPath:(id)a0 atScrollPosition:(long long)a1 animated:(BOOL)a2;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (id)copyScriptProperties;
- (void)setScriptProperties:(id)a0;
- (void)_resetTableView;
- (void)_deliverTapCount:(long long)a0 forIndexPath:(id)a1;
- (void)_doubleTapTimeout;
- (void)_reloadPlaceholderCells;
- (BOOL)canSelectRowAtIndexPath:(id)a0;
- (int)clippedCornersForIndexPath:(id)a0;
- (id)copyArchivableContext;
- (id)copyDefaultScriptProperties;
- (BOOL)handleSelectionForIndexPath:(id)a0 tapCount:(long long)a1;
- (BOOL)indexPathIsPlaceholder:(id)a0;
- (id)newTableView;
- (void)reloadForChangedRowCount:(long long)a0;

@end
