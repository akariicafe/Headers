@class NSString, CalendarNotesCell, UITableView;

@interface EKEventNotesEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate> {
    UITableView *_table;
    CalendarNotesCell *_cell;
    NSString *_text;
}

@property (copy, nonatomic) NSString *noteText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidLoad;
- (BOOL)resignFirstResponder;
- (void)viewDidDisappear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)validateAllowingAlert:(BOOL)a0;

@end
