@class NSString, SBHomeGestureParticipant, SBBarSwipeAffordanceController, SBBarSwipeAffordanceView;
@protocol SBHomeGrabberPointerClickDelegate, SBBarSwipeAffordanceControllingDelegate;

@interface SBBarSwipeAffordanceViewController : UIViewController <SBBarSwipeAffordanceControlling> {
    SBBarSwipeAffordanceController *_barSwipeAffordanceController;
}

@property (retain, nonatomic) SBBarSwipeAffordanceView *view;
@property (weak, nonatomic) id<SBBarSwipeAffordanceControllingDelegate> delegate;
@property (readonly, nonatomic) SBBarSwipeAffordanceView *barSwipeAffordanceView;
@property (nonatomic) BOOL wantsToBeActiveAffordance;
@property (nonatomic) BOOL suppressAffordance;
@property (readonly, nonatomic) SBHomeGestureParticipant *homeGestureParticipant;
@property (weak, nonatomic) id<SBHomeGrabberPointerClickDelegate> pointerClickDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)initWithHomeGestureParticipantIdentifier:(long long)a0;

@end
