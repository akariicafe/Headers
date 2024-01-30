@class NSString;
@protocol CSModalHomeGestureParticipating;

@interface SBDashBoardModalHomeAffordanceControllerClientBridge : NSObject <SBHomeGestureParticipantDelegate, SBFZStackParticipantDelegate, SBHomeGrabberDelegate> {
    id<CSModalHomeGestureParticipating> _coverSheetModalHomeGestureParticipant;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)zStackParticipantDidChange:(id)a0;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)a0;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void).cxx_destruct;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)a0;
- (id)initWithCoverSheetModalHomeGestureParticipant:(id)a0;

@end
