@class NSArray, NSString, NSMutableOrderedSet, UISearchController;
@protocol WFTagPickerViewControllerDelegate;

@interface WFTagPickerViewController : UITableViewController <UISearchResultsUpdating>

@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSMutableOrderedSet *selectedTags;
@property (readonly, nonatomic) UISearchController *searchController;
@property (weak, nonatomic) id<WFTagPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)dismiss;
- (BOOL)_canShowWhileLocked;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void).cxx_destruct;
- (id)currentResults;
- (void)cancel;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithTitle:(id)a0 tags:(id)a1;

@end
