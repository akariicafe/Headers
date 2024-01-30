@class NSString, NSLayoutConstraint, CPSDashboardEstimatesView, UIView;
@protocol CPSSafeAreaDelegate;

@interface CPSDashboardEstimatesViewController : UIViewController <CPSNavigationDisplaying>

@property (retain, nonatomic) CPSDashboardEstimatesView *estimatesView;
@property (retain, nonatomic) UIView *platterView;
@property (retain, nonatomic) NSLayoutConstraint *platterBottomConstraint;
@property (weak, nonatomic) id<CPSSafeAreaDelegate> safeAreaDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_safeAreaInsets;
- (void)viewDidLoad;
- (void)updateTripEstimates:(id)a0;
- (void)navigator:(id)a0 didEndTrip:(BOOL)a1;

@end
