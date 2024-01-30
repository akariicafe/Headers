@class NSArray, WKBackForwardListItem, NSString;
@protocol BackForwardTableViewControllerDelegate;

@interface BackForwardTableViewController : _SFPopoverSizingTableViewController <UITableViewDragDelegate_Private>

@property (weak, nonatomic) id<BackForwardTableViewControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *backForwardList;
@property (retain, nonatomic) WKBackForwardListItem *parentItem;
@property (nonatomic) BOOL reversesListOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tableViewCellForSizeEstimation;

- (void)done;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)itemAtIndexPath:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)loadView;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (long long)_tableView:(id)a0 dataOwnerForDragSession:(id)a1 atIndexPath:(id)a2;
- (id)tableView:(id)a0 itemsForAddingToDragSession:(id)a1 atIndexPath:(id)a2 point:(struct CGPoint { double x0; double x1; })a3;
- (id)tableView:(id)a0 itemsForBeginningDragSession:(id)a1 atIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)_dragItemForURLAtIndexPath:(id)a0;

@end
