@class PNPDeviceState, NSString, PNPAirplaneModeView, PNPPlatterTransitioningDelegate;
@protocol PNPViewControllerAppearanceDelegate, PNPAirplaneModeBluetoothDelegate, PNPPlatterViewControllerPlatterDelegate;

@interface PNPAirplaneModeViewController : UIViewController <PNPAirplaneModeBluetoothViewDelegate, PNPPlatterViewController, PNPDeviceStateConfigurable, PNPViewController> {
    PNPPlatterTransitioningDelegate *_platterTransitioningDelegate;
    PNPAirplaneModeView *_airplaneModeView;
}

@property (weak, nonatomic) id<PNPAirplaneModeBluetoothDelegate> delegate;
@property (readonly, nonatomic) unsigned long long preferredEdge;
@property (weak, nonatomic) id<PNPPlatterViewControllerPlatterDelegate> platterDelegate;
@property (readonly, nonatomic) double preferredCornerRadius;
@property (copy, nonatomic) PNPDeviceState *deviceState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PNPViewControllerAppearanceDelegate> appearanceDelegate;

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (id)_platterContainerView;
- (void)didTapOnBluetoothButton;
- (void)dismissPill;

@end
