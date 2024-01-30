@class NSString;
@protocol CSHomeGestureParticipating;

@interface SBDashBoardHomeAffordanceControllerClientBridge : NSObject <SBNotificationHomeAffordanceControllerClient> {
    id<CSHomeGestureParticipating> _coverSheetHomeGestureParticipant;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)zStackParticipantDidChange:(id)a0;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)a0;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoverSheetHomeGestureParticipant:(id)a0;

@end
