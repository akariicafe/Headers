@class UIBarButtonItem, HUFaceRecognitionAddPersonItemManager;
@protocol HUFaceRecognitionAddPersonViewControllerDelegate;

@interface HUFaceRecognitionAddPersonViewController : HUSearchableItemTableViewController

@property (readonly, nonatomic) HUFaceRecognitionAddPersonItemManager *addPersonItemManager;
@property (readonly, nonatomic) UIBarButtonItem *doneButton;
@property (weak, nonatomic) id<HUFaceRecognitionAddPersonViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithSignificantEvent:(id)a0 home:(id)a1;
- (void)viewDidLoad;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1 searchBar:(id)a2 searchBarPosition:(unsigned long long)a3;
- (void)_donePressed:(id)a0;
- (void)updateForSearch;
- (unsigned long long)automaticDisablingReasonsForItem:(id)a0;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;

@end
