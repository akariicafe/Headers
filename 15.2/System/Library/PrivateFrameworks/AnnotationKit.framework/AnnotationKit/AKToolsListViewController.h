@class NSArray, NSString, UITableView;
@protocol AKToolsListViewControllerDelegate;

@interface AKToolsListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *cellItemTypes;
@property (nonatomic) BOOL isDeviceLocked;
@property (weak, nonatomic) id<AKToolsListViewControllerDelegate> delegate;
@property (nonatomic) BOOL supportsOpacityEditing;
@property (nonatomic) BOOL supportsImageDescriptionEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultCellItemTypes;

- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)_canShowWhileLocked;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_shapeButtonPressed:(id)a0;
- (id)_buttonViewForShapes;
- (id)_buttonViewForImageDescription;
- (void)addRowView:(id)a0 toCellView:(id)a1;
- (id)_buttonViewForText;
- (id)_buttonViewForSignature;
- (id)_buttonViewForLoupe;
- (id)_buttonViewForOpacity;
- (long long)_shapesCellIndexRow;
- (id)_buttonViewWithImage:(id)a0 title:(id)a1 tintColor:(id)a2;
- (void)_reloadCellItemTypes;
- (void)_updateDeviceLocked;

@end
