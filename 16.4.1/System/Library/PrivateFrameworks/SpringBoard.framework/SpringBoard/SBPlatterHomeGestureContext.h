@class NSString, SBBarSwipeAffordanceController;
@protocol BSInvalidatable, SBUIPresentableHomeGestureParticipant, SBPlatterHomeGestureContextDelegate;

@interface SBPlatterHomeGestureContext : NSObject <SBBarSwipeAffordanceControllingDelegate, SBBarSwipeAffordanceDelegate, SBUIPresentableHomeGestureContext, SBPlatterHomeGestureViewProviding> {
    SBBarSwipeAffordanceController *_barSwipeAffordanceController;
    id<BSInvalidatable> _gestureRecognizerPriorityAssertion;
}

@property (readonly, weak, nonatomic) id<SBUIPresentableHomeGestureParticipant> participant;
@property (weak, nonatomic) id<SBPlatterHomeGestureContextDelegate> delegate;
@property (readonly, nonatomic) BOOL wantsToBeActiveAffordance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL ownsHomeGesture;

- (id)unhideAnimationSettingsForBarSwipeAffordanceView:(id)a0;
- (id)hideAnimationSettingsForBarSwipeAffordanceView:(id)a0;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void)dealloc;
- (void)zStackParticipantDidChange:(id)a0;
- (unsigned long long)barSwipeAffordanceView:(id)a0 systemGestureTypeForType:(long long)a1;
- (void).cxx_destruct;
- (void)setWantsHomeGesture:(BOOL)a0;
- (id)platterBarSwipeAffordanceViewForParticipant:(id)a0;
- (void)_setOwnsHomeGesture:(BOOL)a0;
- (void)becomeActiveAffordanceIfPossible:(BOOL)a0;
- (id)initWithParticipant:(id)a0 participantIdentifier:(long long)a1 windowScene:(id)a2;
- (id)keyboardHomeAffordanceAssertionForBarSwipeAffordanceControlling:(id)a0;

@end
