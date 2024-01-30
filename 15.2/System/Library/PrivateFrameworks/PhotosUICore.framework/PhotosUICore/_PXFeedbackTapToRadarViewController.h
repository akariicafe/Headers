@class UILabel, UISwitch, UISegmentedControl;
@protocol _PXFeedbackTapToRadarViewControllerDelegate;

@interface _PXFeedbackTapToRadarViewController : UIViewController

@property (retain, nonatomic) UISwitch *screenshotSwitch;
@property (retain, nonatomic) UISwitch *diagnoseSwitch;
@property (retain, nonatomic) id<_PXFeedbackTapToRadarViewControllerDelegate> delegate;
@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (retain, nonatomic) UILabel *routesDescriptionLabel;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_didSelectCancelButton:(id)a0;
- (void)_didSelectFileRadarButton:(id)a0;

@end
