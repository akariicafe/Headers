@class PMActivityItemProvider, PMPosterViewController, NSLayoutConstraint;

@interface PMShareOrientationSelectionViewController : UIViewController

@property (retain, nonatomic) PMPosterViewController *posterViewController;
@property (retain, nonatomic) NSLayoutConstraint *aspectRatioConstraint;
@property (weak, nonatomic) PMActivityItemProvider *itemProvider;
@property (nonatomic) double exportAspect;

- (void)createConstraints;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (double)upScalingFactor;
- (void)_updateSharingHeaderIcons;

@end
