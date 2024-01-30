@class NSArray;

@interface _UIDocumentPickerManagementViewController : _UIContainerHuggingTableViewController

@property (retain, nonatomic) NSArray *allPickers;
@property (retain, nonatomic) NSArray *fileTypes;
@property (nonatomic) unsigned long long mode;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 targetIndexPathForMoveFromRowAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_updateContentSize;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)_doneButtonPressed;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)switchToggled:(id)a0;
- (id)initWithFileTypes:(id)a0 mode:(unsigned long long)a1;

@end
