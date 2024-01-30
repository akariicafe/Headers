@class SBFZStackParticipant, NSString, SBBarSwipeAffordanceController, SBBarSwipeAffordanceView;
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
@property (readonly, nonatomic) SBFZStackParticipant *zStackParticipant;
@property (weak, nonatomic) id<SBHomeGrabberPointerClickDelegate> pointerClickDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithZStackParticipantIdentifier:(long long)a0 windowScene:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void)zStackParticipantDidChange:(id)a0;
- (void).cxx_destruct;
- (void)loadView;

@end
