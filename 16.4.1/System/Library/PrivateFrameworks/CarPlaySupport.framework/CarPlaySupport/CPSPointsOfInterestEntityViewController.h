@class CPSPointsOfInterestMapViewController;

@interface CPSPointsOfInterestEntityViewController : CPSBaseEntityContentViewController

@property (readonly, nonatomic) CPSPointsOfInterestMapViewController *mapViewController;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setupViewControllers;
- (void)didUpdateEntity:(id)a0;
- (id)initWithEntity:(id)a0 resourceProvider:(id)a1;
- (BOOL)shouldAppearInUnsafeArea;

@end
