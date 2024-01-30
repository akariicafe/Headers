@class PNPDeviceState, NSString, UIView, PNPPlatterTransitioningDelegate;
@protocol PNPDeviceStateConfigurable, PNPPlatterViewControllerPlatterDelegate, PNPViewControllerAppearanceDelegate;

@interface PNPLockScreenViewController : UIViewController <PNPPlatterViewController, PNPDeviceStateConfigurable, PNPViewController> {
    PNPPlatterTransitioningDelegate *_platterTransitioningDelegate;
}

@property (retain, nonatomic) UIView<PNPDeviceStateConfigurable> *pillView;
@property (readonly, nonatomic) unsigned long long preferredEdge;
@property (weak, nonatomic) id<PNPPlatterViewControllerPlatterDelegate> platterDelegate;
@property (readonly, nonatomic) double preferredCornerRadius;
@property (copy, nonatomic) PNPDeviceState *deviceState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PNPViewControllerAppearanceDelegate> appearanceDelegate;

- (void).cxx_destruct;
- (void)loadView;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)_platterContainerView;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)dismissPill;

@end
