@class CPSPointsOfInterestMapViewController;

@interface CPSPointsOfInterestEntityViewController : CPSBaseEntityContentViewController

@property (readonly, nonatomic) CPSPointsOfInterestMapViewController *mapViewController;

- (void).cxx_destruct;
- (void)setupViewControllers;
- (void)viewDidLoad;
- (id)initWithEntity:(id)a0 resourceProvider:(id)a1;
- (void)didUpdateEntity:(id)a0;
- (BOOL)shouldAppearInUnsafeArea;

@end
