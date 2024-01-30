@class SBFZStackParticipant, NSString, SBHomeGestureParticipant, SBBarSwipeAffordanceController, SBBarSwipeAffordanceView;
@protocol SBHomeGrabberPointerClickDelegate, SBBarSwipeAffordanceControllingDelegate;

@interface SBBarSwipeAffordanceViewController : UIViewController <SBBarSwipeAffordanceControlling> {
    SBBarSwipeAffordanceController *_barSwipeAffordanceController;
}

@property (retain, nonatomic) SBBarSwipeAffordanceView *view;
@property (weak, nonatomic) id<SBBarSwipeAffordanceControllingDelegate> delegate;
@property (readonly, nonatomic) SBBarSwipeAffordanceView *barSwipeAffordanceView;
@property (nonatomic) BOOL wantsToBeActiveAffordance;
@property (nonatomic) BOOL suppressAffordance;
@property (nonatomic) long long activationPolicyForParticipantsBelow;
@property (readonly, nonatomic) SBHomeGestureParticipant *homeGestureParticipant;
@property (readonly, nonatomic) SBFZStackParticipant *zStackParticipant;
@property (weak, nonatomic) id<SBHomeGrabberPointerClickDelegate> pointerClickDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)zStackParticipantDidChange:(id)a0;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)a0;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithHomeGestureParticipantIdentifier:(long long)a0 zStackParticipantIdentifier:(long long)a1;
- (id)initWithHomeGestureParticipantIdentifier:(long long)a0;

@end
