@class CPSEntityMapButton, NSString;
@protocol CPSPointsOfInterestMapDelegate;

@interface CPSPointsOfInterestMapControlsViewController : UIViewController <CPSButtonDelegate, CPSLinearFocusProviding>

@property (weak, nonatomic) id<CPSPointsOfInterestMapDelegate> mapDelegate;
@property (retain, nonatomic) CPSEntityMapButton *zoomInButton;
@property (retain, nonatomic) CPSEntityMapButton *zoomOutButton;
@property (retain, nonatomic) CPSEntityMapButton *panButton;
@property (retain, nonatomic) CPSEntityMapButton *centerButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;

- (void).cxx_destruct;
- (void)setupViews;
- (void)viewDidLoad;
- (void)didSelectButton:(id)a0;
- (id)_linearFocusItems;
- (id)initWithMapDelegate:(id)a0;
- (void)zoomInPressed:(id)a0;
- (void)zoomOutPressed:(id)a0;
- (void)panPressed:(id)a0;
- (void)centerPressed:(id)a0;

@end
