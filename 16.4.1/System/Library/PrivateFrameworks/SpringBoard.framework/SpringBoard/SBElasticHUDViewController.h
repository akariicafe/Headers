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
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (BOOL)_canShowWhileLocked;
- (void)reloadData;
- (void)viewDidLoad;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithFactory:(id)a0;
- (BOOL)definesAnimatedDismissal;
- (void)dismissAnimatedWithCompletion:(id /* block */)a0;
- (void)elasticValueViewControllerNeedsDismissal:(id)a0;
- (id)elasticValueViewControllerNeedsLiveRendering:(id)a0;
- (id)initWithElasticValueContentViewController:(id)a0;
- (void)noteButtonDownWasHit:(BOOL)a0;
- (void)noteButtonUpWasHit:(BOOL)a0;
- (void)noteValueDidChange:(float)a0;
- (void)noteValueWillDeltaStepToValue:(float)a0;

@end
