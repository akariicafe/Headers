@class NSString, SBBarSwipeAffordanceController;
@protocol SBBannerManagerHomeGestureContextDelegate, BSInvalidatable, SBUIBannerHomeGestureParticipant;

@interface SBBannerManagerHomeGestureContext : NSObject <SBBarSwipeAffordanceControllingDelegate, SBBarSwipeAffordanceDelegate, SBUIBannerHomeGestureContext, SBBannerHomeGestureViewProviding> {
    SBBarSwipeAffordanceController *_barSwipeAffordanceController;
    id<BSInvalidatable> _bannerManagerGestureRecognizerPriorityAssertion;
}

@property (readonly, weak, nonatomic) id<SBUIBannerHomeGestureParticipant> participant;
@property (weak, nonatomic) id<SBBannerManagerHomeGestureContextDelegate> delegate;
@property (readonly, nonatomic) BOOL wantsToBeActiveAffordance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL ownsHomeGesture;

- (id)unhideAnimationSettingsForBarSwipeAffordanceView:(id)a0;
- (unsigned long long)barSwipeAffordanceView:(id)a0 systemGestureTypeForType:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)a0;
- (id)hideAnimationSettingsForBarSwipeAffordanceView:(id)a0;
- (id)initWithParticipant:(id)a0;
- (void)setWantsHomeGesture:(BOOL)a0;
- (id)bannerBarSwipeAffordanceViewForParticipant:(id)a0;
- (id)keyboardHomeAffordanceAssertionForBarSwipeAffordanceControlling:(id)a0;
- (void)becomeActiveAffordanceIfPossible:(BOOL)a0;

@end
