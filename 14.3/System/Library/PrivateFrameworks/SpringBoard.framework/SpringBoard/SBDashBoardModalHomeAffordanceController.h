@class NSString, UIScreenEdgePanGestureRecognizer, SBHomeGestureParticipant, SBHomeGestureArbiter;

@interface SBDashBoardModalHomeAffordanceController : NSObject <CSModalHomeAffordanceControlling> {
    SBHomeGestureArbiter *_homeGestureArbiter;
    SBHomeGestureParticipant *_participant;
}

@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *homeGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_addGrabberView:(id)a0;
- (void)registerHomeGestureParticipant:(id)a0;
- (void)unregisterHomeGestureParticipant;

@end
