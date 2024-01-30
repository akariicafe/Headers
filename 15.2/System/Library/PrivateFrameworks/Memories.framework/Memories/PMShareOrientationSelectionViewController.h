@class PMActivityItemProvider, PMPosterViewController, NSLayoutConstraint;

@interface PMShareOrientationSelectionViewController : UIViewController

@property (retain, nonatomic) PMPosterViewController *posterViewController;
@property (retain, nonatomic) NSLayoutConstraint *aspectRatioConstraint;
@property (weak, nonatomic) PMActivityItemProvider *itemProvider;
@property (nonatomic) double exportAspect;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)init;
- (void)createConstraints;
- (double)upScalingFactor;
- (void)_updateSharingHeaderIcons;

@end
