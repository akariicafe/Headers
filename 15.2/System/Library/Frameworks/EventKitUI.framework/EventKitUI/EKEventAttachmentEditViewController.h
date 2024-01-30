@class NSString, NSArray, UITableView;
@protocol EKEventAttachmentEditViewControllerDelegate;

@interface EKEventAttachmentEditViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKEventAttachmentCellControllerDelegate> {
    UITableView *_table;
    NSArray *_cellControllers;
}

@property (weak, nonatomic) id<EKEventAttachmentEditViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void)loadView;
- (id)owningEventForAttachmentCellController:(id)a0;
- (void).cxx_destruct;
- (id)parentViewControllerForAttachmentCellController:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attachments:(id)a1 sourceIsManaged:(BOOL)a2;

@end
