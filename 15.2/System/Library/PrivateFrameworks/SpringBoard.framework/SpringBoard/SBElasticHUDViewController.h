@class NSString, SBElasticValueViewController;
@protocol SBElasticHUDViewControllerDelegate;

@interface SBElasticHUDViewController : SBFTouchPassThroughViewController <UIViewControllerTransitioningDelegate, SBElasticValueViewControllerDelegate, SBHUDViewControlling>

@property (readonly, nonatomic) SBElasticValueViewController *elasticValueViewController;
@property (weak, nonatomic) id<SBElasticHUDViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationControllerForDismissedController:(id)a0;
- (void)reloadData;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)isEqual:(id)a0;
- (void)_dismiss;
- (BOOL)definesAnimatedDismissal;
- (void)dismissAnimatedWithCompletion:(id /* block */)a0;
- (void)noteButtonUpWasHit:(BOOL)a0;
- (void)noteButtonDownWasHit:(BOOL)a0;
- (void)noteValueWillDeltaStepToValue:(float)a0;
- (id)initWithFactory:(id)a0;
- (void)noteValueDidChange:(float)a0;
- (id)initWithElasticValueContentViewController:(id)a0;
- (void)elasticValueViewControllerNeedsDismissal:(id)a0;

@end
