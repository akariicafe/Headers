@class CACSpokenCommandItem, NSString, AXSiriShortcut;
@protocol CACCustomCommandActionViewControllerDelegate;

@interface CACCustomCommandActionViewController : UITableViewController <AXGestureRecorderMainViewControllerDelegate, CACShortcutsSelectionDelegate, UITextViewDelegate>

@property (nonatomic) BOOL isPresentingGestureRecorder;
@property (retain, nonatomic) AXSiriShortcut *selectedShortcutForCommand;
@property (weak, nonatomic) id<CACCustomCommandActionViewControllerDelegate> delegate;
@property (retain, nonatomic) CACSpokenCommandItem *commandItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isModalInPresentation;
- (void)textViewDidEndEditing:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)gestureRecorder:(id)a0 saveReplayableGesture:(id)a1;
- (void)didSelectShortcut:(id)a0;
- (BOOL)_shouldDisallowSelectingRowAtIndexPath:(id)a0;
- (void)_updateForAction:(long long)a0;
- (BOOL)_useDetailCell;
- (id)_stringFromPasteboardDataArray:(id)a0;

@end
