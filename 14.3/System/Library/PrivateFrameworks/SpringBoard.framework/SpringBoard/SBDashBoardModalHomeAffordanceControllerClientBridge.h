@class NSString;
@protocol CSModalHomeGestureParticipating;

@interface SBDashBoardModalHomeAffordanceControllerClientBridge : NSObject <SBHomeGestureParticipantDelegate> {
    id<CSModalHomeGestureParticipating> _coverSheetModalHomeGestureParticipant;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)a0;
- (id)initWithCoverSheetModalHomeGestureParticipant:(id)a0;

@end
