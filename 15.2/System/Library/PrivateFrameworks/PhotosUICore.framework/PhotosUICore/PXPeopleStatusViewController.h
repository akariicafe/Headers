@class PXPeopleStatusView;
@protocol PXPeopleStatusViewDelegate;

@interface PXPeopleStatusViewController : UIViewController

@property (retain, nonatomic) PXPeopleStatusView *statusView;
@property (weak, nonatomic) id<PXPeopleStatusViewDelegate> delegate;

- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_continuePressed:(id)a0;

@end
