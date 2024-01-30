@class PXPeopleStatusView;
@protocol PXPeopleStatusViewDelegate;

@interface PXPeopleStatusViewController : UIViewController

@property (retain, nonatomic) PXPeopleStatusView *statusView;
@property (weak, nonatomic) id<PXPeopleStatusViewDelegate> delegate;

- (void).cxx_destruct;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)_continuePressed:(id)a0;
- (void)viewDidLoad;

@end
