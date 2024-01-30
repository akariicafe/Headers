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
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)keyboardDidShowOrDock:(id)a0;
- (void)keyboardDidHideOrUndock:(id)a0;
- (id)initWithHyperlink:(id)a0 readOnly:(BOOL)a1;

@end
