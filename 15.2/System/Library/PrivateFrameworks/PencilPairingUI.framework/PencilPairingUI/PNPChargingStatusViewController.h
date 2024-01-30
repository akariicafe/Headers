@class PNPDeviceState, NSString, PNPChargingStatusView, PNPPlatterTransitioningDelegate;
@protocol PNPViewControllerAppearanceDelegate, PNPPlatterViewControllerPlatterDelegate;

@interface PNPChargingStatusViewController : UIViewController <PNPPlatterViewController, PNPDeviceStateConfigurable, PNPViewController> {
    PNPPlatterTransitioningDelegate *_platterTransitioningDelegate;
    PNPChargingStatusView *_chargingStatusView;
}

@property (readonly, nonatomic) unsigned long long preferredEdge;
@property (weak, nonatomic) id<PNPPlatterViewControllerPlatterDelegate> platterDelegate;
@property (readonly, nonatomic) double preferredCornerRadius;
@property (copy, nonatomic) PNPDeviceState *deviceState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PNPViewControllerAppearanceDelegate> appearanceDelegate;

- (void)viewDidLoad;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)_platterContainerView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_configureAutoDismiss;

@end
