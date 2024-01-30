@class CPSPointsOfInterestMapViewController;

@interface CPSPointsOfInterestEntityViewController : CPSBaseEntityContentViewController

@property (readonly, nonatomic) CPSPointsOfInterestMapViewController *mapViewController;

- (void)viewDidLoad;
- (void)setupViewControllers;
- (void).cxx_destruct;
- (id)initWithEntity:(id)a0 resourceProvider:(id)a1;
- (void)didUpdateEntity:(id)a0;
- (BOOL)shouldAppearInUnsafeArea;

@end
