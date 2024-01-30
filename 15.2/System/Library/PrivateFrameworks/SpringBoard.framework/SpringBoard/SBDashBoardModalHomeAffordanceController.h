@class SBFZStackParticipant, NSString, UIScreenEdgePanGestureRecognizer, SBFZStackResolver, SBHomeGestureParticipant, SBHomeGestureArbiter;

@interface SBDashBoardModalHomeAffordanceController : NSObject <CSModalHomeAffordanceControlling> {
    SBHomeGestureArbiter *_homeGestureArbiter;
    SBHomeGestureParticipant *_homeGestureParticipant;
    SBFZStackResolver *_zStackResolver;
    SBFZStackParticipant *_zStackParticipant;
}

@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *homeGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)ownsHomeGesture;
- (void).cxx_destruct;
- (id)init;
- (void)_addGrabberView:(id)a0 clientBridge:(id)a1;
- (BOOL)registerHomeGestureParticipant:(id)a0;
- (void)unregisterHomeGestureParticipant;

@end
