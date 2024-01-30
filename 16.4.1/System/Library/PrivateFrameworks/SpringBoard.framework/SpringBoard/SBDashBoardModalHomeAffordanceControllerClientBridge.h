@class NSString;
@protocol CSModalHomeGestureParticipating;

@interface SBDashBoardModalHomeAffordanceControllerClientBridge : NSObject <SBFZStackParticipantDelegate, SBHomeGrabberDelegate> {
    id<CSModalHomeGestureParticipating> _coverSheetModalHomeGestureParticipant;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)additionalEdgeSpacingForHomeGrabberView:(id)a0;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void)zStackParticipantDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoverSheetModalHomeGestureParticipant:(id)a0;

@end
