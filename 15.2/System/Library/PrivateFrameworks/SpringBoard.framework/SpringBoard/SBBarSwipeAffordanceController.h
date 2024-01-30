@class SBFZStackParticipant, NSString, SBHomeGestureParticipant, SBBarSwipeAffordanceView;
@protocol SBHomeGrabberPointerClickDelegate, SBBarSwipeAffordanceControllingDelegate;

@interface SBBarSwipeAffordanceController : NSObject <SBBarSwipeAffordanceControlling> {
    long long _homeGestureParticipantIdentifier;
    long long _zStackParticipantIdentifier;
}

@property (retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant;
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant;
@property (weak, nonatomic) id<SBBarSwipeAffordanceControllingDelegate> delegate;
@property (readonly, nonatomic) SBBarSwipeAffordanceView *barSwipeAffordanceView;
@property (nonatomic) BOOL wantsToBeActiveAffordance;
@property (nonatomic) BOOL suppressAffordance;
@property (nonatomic) long long activationPolicyForParticipantsBelow;
@property (weak, nonatomic) id<SBHomeGrabberPointerClickDelegate> pointerClickDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)zStackParticipantDidChange:(id)a0;
- (void)_keyboardWillHide:(id)a0;
- (void)_keyboardDidShow:(id)a0;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)a0;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void).cxx_destruct;
- (void)homeGestureParticipantResolvedHomeAffordanceSuppressionDidChange:(id)a0;
- (void)dealloc;
- (void)_updateActiveState;
- (id)initWithHomeGestureParticipantIdentifier:(long long)a0 zStackParticipantIdentifier:(long long)a1;
- (id)initWithHomeGestureParticipantIdentifier:(long long)a0;
- (void)_beginTryingToBecomeActiveAffordance;
- (void)_stopTryingToBecomeActiveAffordance;
- (void)_setKeyboardHomeAffordanceVisible:(BOOL)a0;

@end
