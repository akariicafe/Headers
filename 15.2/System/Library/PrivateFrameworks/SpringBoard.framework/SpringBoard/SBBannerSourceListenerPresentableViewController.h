@class SBBannerGestureRecognizerPriorityAssertion, NSString, NSMutableDictionary, NSMutableArray, UIViewController;
@protocol BNPresentableContext, SBUIPresentableHomeGestureContext;

@interface SBBannerSourceListenerPresentableViewController : BNBannerSourceListenerPresentableViewController <SBBarSwipeAffordanceObserver, SBBannerManagerPresentable, SBUIPresentableLocalHomeGestureParticipant, SBButtonEventsHandler> {
    NSMutableArray *_wantsHomeAffordanceActionsAwaitingResponse;
    SBBannerGestureRecognizerPriorityAssertion *_gestureRecognizerPriorityAssertion;
    NSMutableDictionary *_buttonEventsToActions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableType;
@property (weak, nonatomic) id<BNPresentableContext> presentableContext;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (weak, nonatomic) id<SBUIPresentableHomeGestureContext> homeGestureContext;

- (BOOL)handleHomeButtonDoublePress;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)a0;
- (void)viewDidLoad;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (BOOL)handleLockButtonPress;
- (BOOL)handleHomeButtonPress;
- (void)presentableWillDisappearAsBanner:(id)a0 withReason:(id)a1;
- (BOOL)shouldDismissForReason:(id)a0 outReason:(id *)a1;
- (BOOL)handleVoiceCommandButtonPress;
- (BOOL)handleHomeButtonLongPress;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (BOOL)handleVolumeDownButtonPress;
- (BOOL)handleVolumeUpButtonPress;
- (void).cxx_destruct;
- (void)dealloc;
- (void)homeGestureOwnershipDidChange:(BOOL)a0;
- (void)_invalidateAllButtonEventActions;

@end
