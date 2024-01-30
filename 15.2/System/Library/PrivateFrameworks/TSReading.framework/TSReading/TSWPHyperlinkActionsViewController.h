@class TSWPHyperlinkField, NSString, TSWPHyperlinkSettingsViewController;

@interface TSWPHyperlinkActionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    BOOL _readOnly;
    TSWPHyperlinkSettingsViewController *_hyperlinkSettingsViewController;
}

@property (retain, nonatomic) TSWPHyperlinkField *hyperlink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)loadView;
- (void)dealloc;
- (id)initWithHyperlink:(id)a0 readOnly:(BOOL)a1;
- (id)hyperlinkSettingsViewController;

@end
