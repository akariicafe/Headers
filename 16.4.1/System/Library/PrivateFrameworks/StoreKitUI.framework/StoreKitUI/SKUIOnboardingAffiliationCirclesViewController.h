@class UIView, NSString, SKUIPhysicalCirclesView, SKUIClientContext, NSObject, NSMutableArray, SKUIOnboardingInstructionsView, NSMapTable;
@protocol SKUIOnboardingAffiliationCirclesDelegate, OS_dispatch_source;

@interface SKUIOnboardingAffiliationCirclesViewController : UIViewController <SKUIPhysicalCirclesDataSource, SKUIPhysicalCirclesDelegate> {
    SKUIPhysicalCirclesView *_circlesView;
    NSObject<OS_dispatch_source> *_deletionTimer;
    BOOL _didPerformFinishAnimation;
    NSMapTable *_images;
    SKUIOnboardingInstructionsView *_instructionsView;
    BOOL _needsReloadOnDidAppear;
}

@property (copy, nonatomic) NSMutableArray *affiliationItems;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id<SKUIOnboardingAffiliationCirclesDelegate> delegate;
@property (readonly, nonatomic) SKUIOnboardingInstructionsView *instructionsView;
@property (readonly, nonatomic) double maximumCircleDiameter;
@property (retain, nonatomic) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)setFooterView:(id)a0 animated:(BOOL)a1;
- (long long)_titlePositionForAffinityCount:(long long)a0;
- (void)circleView:(id)a0 didTapCircleAtIndex:(long long)a1;
- (void)_cancelDeletionTimer;
- (double)_circleImageAlphaForAffinityCount:(long long)a0;
- (struct CGSize { double x0; double x1; })_circleSizeForAffinityCount:(long long)a0;
- (void)_completeDeletionForCircleAtIndex:(long long)a0;
- (void)_reloadRepellors;
- (void)_sendAffilationItemsDidChange;
- (double)_topLayoutMargin;
- (void)addAffiliationItems:(id)a0;
- (void)circleView:(id)a0 didBeginLongPressForCircleAtIndex:(long long)a1;
- (void)circleView:(id)a0 didEndLongPressForCircleAtIndex:(long long)a1;
- (id)circlesView:(id)a0 circleForIndex:(long long)a1;
- (long long)numberOfCirclesInCircleView:(id)a0;
- (void)performFinishAnimationWithCompletionBlock:(id /* block */)a0;
- (void)removeAffiliationItemsInIndexSet:(id)a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)resetWithAffiliationItems:(id)a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)setImage:(id)a0 forAffiliationItem:(id)a1;
- (void)setUserAffinityCount:(long long)a0 forAffiliationItemAtIndex:(long long)a1 animated:(BOOL)a2 completionBlock:(id /* block */)a3;

@end
