@class NSString;
@protocol CSHomeGestureParticipating;

@interface SBDashBoardHomeAffordanceControllerClientBridge : NSObject <SBNotificationHomeAffordanceControllerClient> {
    id<CSHomeGestureParticipating> _coverSheetHomeGestureParticipant;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)a0;
- (id)initWithCoverSheetHomeGestureParticipant:(id)a0;

@end
