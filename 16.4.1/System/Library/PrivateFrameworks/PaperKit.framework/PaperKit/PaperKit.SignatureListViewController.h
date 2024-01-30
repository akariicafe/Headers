@interface PaperKit.SignatureListViewController : UITableViewController {
    void /* unknown type, empty encoding */ rowHeight;
    void /* unknown type, empty encoding */ maximumSelectRows;
    void /* unknown type, empty encoding */ maximumEditRows;
    void /* unknown type, empty encoding */ signatureRowHeight;
    void /* unknown type, empty encoding */ showDescriptions;
    void /* unknown type, empty encoding */ completion;
}

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)_canShowWhileLocked;
- (id)initWithStyle:(long long)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;

@end
