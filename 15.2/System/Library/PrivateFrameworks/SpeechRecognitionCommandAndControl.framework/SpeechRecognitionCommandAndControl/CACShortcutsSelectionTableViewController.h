@class NSArray, AXSiriShortcut, NSString, NSIndexPath;
@protocol CACShortcutsSelectionDelegate;

@interface CACShortcutsSelectionTableViewController : UITableViewController

@property (retain, nonatomic) NSArray *cachedShortcuts;
@property (retain, nonatomic) AXSiriShortcut *previouslySelectedShortcut;
@property (retain, nonatomic) NSIndexPath *previouslySelectedIndex;
@property (retain, nonatomic) NSString *shortcutsToken;
@property (retain, nonatomic) id<CACShortcutsSelectionDelegate> shortcutsSelectionDelegate;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)cancelButtonAction;
- (void)shortcutsDidChange:(id)a0;
- (id)initWithPreviouslySelectedShortcut:(id)a0;

@end
