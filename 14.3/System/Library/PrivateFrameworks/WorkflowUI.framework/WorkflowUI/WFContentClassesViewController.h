@class NSOrderedSet, NSArray, NSMutableOrderedSet, UIBarButtonItem;
@protocol WFContentClassesViewControllerDelegate;

@interface WFContentClassesViewController : UITableViewController

@property (readonly, nonatomic) NSOrderedSet *contentClasses;
@property (readonly, nonatomic) NSMutableOrderedSet *selectedClassesSet;
@property (retain, nonatomic) UIBarButtonItem *selectButtonItem;
@property (weak, nonatomic) id<WFContentClassesViewControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *selectedClasses;

- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)done;
- (void)updateSelectButton;
- (void)notifyChanged;
- (void)selectAction;
- (void)selectContentClasses:(id)a0;

@end
