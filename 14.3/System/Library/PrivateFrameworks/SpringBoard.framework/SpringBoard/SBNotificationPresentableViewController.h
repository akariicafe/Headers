@class NSString, UIViewController;
@protocol SBUIBannerHomeGestureContext;

@interface SBNotificationPresentableViewController : NCNotificationPresentableViewController <SBBannerManagerPresentable, SBBarSwipeAffordanceObserver, SBUIBannerHomeGestureParticipant>

@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableType;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBUIBannerHomeGestureContext> bannerHomeGestureContext;

- (BOOL)handleHomeButtonLongPress;
- (BOOL)handleHomeButtonDoublePress;
- (BOOL)handleHomeButtonPress;
- (BOOL)handleVolumeDownButtonPress;
- (BOOL)handleVolumeUpButtonPress;
- (BOOL)handleVoiceCommandButtonPress;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (BOOL)handleLockButtonPress;
- (void).cxx_destruct;
- (void)longLookDidPresentForNotificationViewController:(id)a0;
- (BOOL)shouldAcquireWindowLevelAssertion;
- (BOOL)shouldDismissForReason:(id)a0;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)a0;
- (void)longLookWillDismissForNotificationViewController:(id)a0;

@end
