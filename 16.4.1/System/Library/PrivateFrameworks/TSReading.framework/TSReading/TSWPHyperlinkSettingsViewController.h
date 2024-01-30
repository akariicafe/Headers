@class TSWPHyperlinkField, NSString, UITableViewCell;

@interface TSWPHyperlinkSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, TSKKeyboardObserver> {
    UITableViewCell *_editingCell;
    BOOL _readOnly;
}

@property (retain, nonatomic) TSWPHyperlinkField *hyperlink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithHyperlink:(id)a0 readOnly:(BOOL)a1;
- (void)keyboardDidHideOrUndock:(id)a0;
- (void)keyboardDidShowOrDock:(id)a0;

@end
