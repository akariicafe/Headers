@class PKPass, NSString, UITableView, PKGroup, UIBarButtonItem;
@protocol PKGroupDelegate, PKEditGroupViewControllerDelegate;

@interface PKEditGroupViewController : PKEditTableViewController <PKGroupDelegate, _UIContextMenuInteractionDelegate, PKEditPassesDetailsResponder> {
    PKGroup *_group;
    id<PKGroupDelegate> _savedDelegate;
    UIBarButtonItem *_deleteToolbarItem;
    UIBarButtonItem *_flexibleSpace;
    PKPass *_viewingPass;
    UITableView *_tableView;
    long long _editStyle;
    struct CGSize { double width; double height; } _imageSizeNeeded;
    id<PKEditGroupViewControllerDelegate> _delegate;
    BOOL _isForWatch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)group;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)contextMenuInteraction:(id)a0 actionsForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1 withSuggestedActions:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)group:(id)a0 didUpdatePass:(id)a1 atIndex:(unsigned long long)a2;
- (void)group:(id)a0 didInsertPass:(id)a1 atIndex:(unsigned long long)a2;
- (void)group:(id)a0 didMovePassFromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;
- (void)group:(id)a0 didRemovePass:(id)a1 atIndex:(unsigned long long)a2;
- (id)pass;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)_deleteButtonPressed;
- (BOOL)contextMenuInteractionShouldBegin:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)configureCell:(id)a0 atIndexPath:(id)a1 withPass:(id)a2;
- (id)viewControllerForRowAtIndexPath:(id)a0;
- (id)passAtIndexPath:(id)a0;
- (BOOL)passExistsWithUniqueIdentifier:(id)a0;
- (void)prefetchItemsAtIndexPaths:(id)a0;
- (id)initWithGroup:(id)a0 existingGroupsController:(id)a1 style:(long long)a2 placeholders:(id)a3 isForWatch:(BOOL)a4 delegate:(id)a5;
- (void)_deleteAllPassesInGroup;
- (void)_presentAlertForUpdatedExpressPass:(id)a0;

@end
