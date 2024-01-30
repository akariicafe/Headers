@class NSString, NSMutableArray;
@protocol SBUIBannerHomeGestureContext;

@interface SBBannerSourceListenerPresentableViewController : BNBannerSourceListenerPresentableViewController <SBBarSwipeAffordanceObserver, SBUIBannerHomeGestureParticipant> {
    NSMutableArray *_wantsHomeAffordanceActionsAwaitingResponse;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBUIBannerHomeGestureContext> bannerHomeGestureContext;

- (void).cxx_destruct;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)presentableWillDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)homeGestureOwnershipDidChange:(BOOL)a0;
- (void)viewDidLoad;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)a0;
- (BOOL)isDraggingDismissalEnabled;
- (BOOL)isDraggingInteractionEnabled;

@end
